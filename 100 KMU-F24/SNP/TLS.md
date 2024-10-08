
If you're not seeing the `tlskeys.log` file being generated in Linux, it's likely that there is an issue with how the environment variable is set or how Chrome is being launched. Let me walk you through some troubleshooting steps to resolve the issue.

### Step 1: Verify Environment Variable Setup
Ensure that the `SSLKEYLOGFILE` environment variable is correctly set and exported. This variable tells Chrome to log TLS keys to the file you specify.

1. **Edit the `.zshrc` file**:

   Open the `.zshrc` configuration file for your `zsh` shell:

   ```zsh
   nano ~/.zshrc
   ```

2. **Add the `SSLKEYLOGFILE` environment variable**:

   Add this line at the end of the `.zshrc` file:

   ```zsh
   export SSLKEYLOGFILE=~/tlskeys.log
   ```

3. **Save the file and apply the changes**:

   Save the file (`Ctrl + O` to write and `Ctrl + X` to exit), and then run the following command to source the updated configuration:

   ```zsh
   source ~/.zshrc
   ```

4. **Verify the variable is set**:

   Run this command to confirm that the `SSLKEYLOGFILE` variable is properly set:

   ```zsh
   echo $SSLKEYLOGFILE
   ```

   This should output the path to your log file, which is `~/tlskeys.log` if you followed the previous steps.

### Step 2: Launch Google Chrome from the Terminal
After setting the environment variable, you need to ensure that Chrome is launched with this variable in effect. This may not happen if you open Chrome from the GUI or through other methods.

1. **Close any running instances of Google Chrome**:

   Close Chrome completely, making sure that no instances are running. You can check by using the following command:

   ```zsh
   ps aux | grep chrome
   ```

   Kill any Chrome processes still running:

   ```zsh
   killall chrome
   ```

2. **Launch Chrome from the terminal**:

   Now, launch Chrome from the terminal, ensuring the environment variable is in place:

   ```zsh
   google-chrome
   ```

   Alternatively, use the alias we discussed earlier if you set one:

   ```zsh
   chrome-tls
   ```

### Step 3: Test if the TLS Key Log File is Created
Once Chrome is running, browse to any HTTPS website, for example, `https://www.google.com`. After browsing for a while, check if the `tlskeys.log` file has been created.

1. **Check if the file exists**:

   ```zsh
   ls ~/tlskeys.log
   ```

2. **Check if the file has content**:

   If the file exists, check if it contains the session keys:

   ```zsh
   cat ~/tlskeys.log
   ```

   If the file is being generated but is empty, Chrome might not be logging the keys correctly. Ensure you are visiting HTTPS websites during this test, as the log will only contain session keys for encrypted traffic.

### Step 4: Ensure Compatibility with Chrome Versions
Some Linux distributions or specific Chrome versions might disable key logging by default. Ensure you are using an up-to-date version of Google Chrome:

1. **Check your Chrome version**:

   Open Chrome and go to `chrome://settings/help` to check the version number.

2. **Update Chrome**:

   If your Chrome version is outdated, update it to the latest version by downloading the `.deb` package from the [official Google Chrome website](https://www.google.com/chrome/) or using the following commands to update via the terminal (if Chrome is already installed):

   ```zsh
   sudo apt update
   sudo apt --only-upgrade install google-chrome-stable
   ```

### Step 5: Check Chrome Permissions and SELinux/AppArmor (Optional)
On some systems, security policies such as SELinux or AppArmor might prevent Chrome from writing to certain directories or files.

1. **Check if SELinux is enforcing**:

   Run this command to check if SELinux is enabled:

   ```zsh
   sestatus
   ```

   If SELinux is enabled and in enforcing mode, it may block Chrome from writing to certain locations like your home directory. You can temporarily disable SELinux to test if this resolves the issue:

   ```zsh
   sudo setenforce 0
   ```

2. **Check AppArmor profile**:

   Similarly, if AppArmor is in use, it might restrict Chrome from writing to certain files. Check if AppArmor is active:

   ```zsh
   sudo aa-status
   ```

   If AppArmor is restricting Chrome, you may need to adjust its profile or disable it temporarily for testing.

### Step 6: Try a Different Log Location (Optional)
If the log file is still not being created, try specifying a different location for the `tlskeys.log` file, such as `/tmp`, which is typically writable by any process:

1. **Change the log location**:

   Modify your `SSLKEYLOGFILE` environment variable to point to `/tmp/tlskeys.log`:

   ```zsh
   export SSLKEYLOGFILE=/tmp/tlskeys.log
   ```

2. **Source the updated `.zshrc`**:

   ```zsh
   source ~/.zshrc
   ```

3. **Launch Chrome again**:

   Test by browsing to some HTTPS websites and check if the `tlskeys.log` file appears in `/tmp`:

   ```zsh
   ls /tmp/tlskeys.log
   ```

If this works, there may have been a permission issue with writing to the home directory.

### Step 7: Use Chromium as an Alternative (Optional)
If the issue persists with Google Chrome, you can try using **Chromium**, the open-source version of Chrome. Sometimes, there are subtle differences in how each version handles TLS key logging.

1. **Install Chromium**:

   ```zsh
   sudo apt install chromium-browser
   ```

2. **Set the `SSLKEYLOGFILE` environment variable**:

   Ensure that `SSLKEYLOGFILE` is still set, and then launch Chromium from the terminal:

   ```zsh
   chromium-browser
   ```

3. **Check if the key log file is created** as described earlier.

### Final Thoughts:
By following these steps, you should be able to generate the `tlskeys.log` file for use in Wireshark to decrypt TLS traffic. If the file is still not being generated after following all of these steps, it's likely an issue specific to your environment or system configuration.