
Reinstalling your Haskell development setup on Linux typically involves a few components: the Glasgow Haskell Compiler (GHC), a build tool (like Stack or Cabal), and possibly the Haskell Language Server (HLS) for IDE support. Here’s a step-by-step guide to reinstalling these components:

### 1. Uninstall Existing Haskell Components

First, remove the existing Haskell components. The method depends on how you initially installed them:

- **If you used Stack:**
  ```bash
  stack uninstall
  ```
  Then remove the Stack directory:
```bash
rm -rf ~/.stack
```

- **If you used Cabal and GHCup:**
  ```bash
  ghcup tui # and then follow the interface to uninstall GHC and Cabal
  ```
  Or use command lines:
  ```bash
  ghcup uninstall ghc <version>
  ghcup uninstall cabal
  ```

- **If you installed them through your system’s package manager (e.g., `apt`, `yum`):**
  ```bash
  sudo apt remove --purge ghc cabal-install  # For Debian-based systems
  ```
  ```bash
  sudo dnf remove ghc cabal-install  # For Fedora
  ```

### 2. Install GHCup (Recommended Method)

GHCup is a tool to manage the Haskell toolchain. It allows you to install GHC, Cabal, and HLS easily.

1. **Install GHCup:**
   Follow the instructions on the GHCup installation page: [https://www.haskell.org/ghcup/](https://www.haskell.org/ghcup/).
   
   Typically, you can install GHCup with:
   ```bash
   curl --proto '=https' --tlsv1.2 -sSf https://get-ghcup.haskell.org | sh
   ```

2. **Install GHC:**
   After installing GHCup, you can install the latest version of GHC (or any specific version you need):
   ```bash
   ghcup install ghc
   ```

3. **Set Up Environment Variables:**
   Ensure that your shell profile (like `~/.bashrc`, `~/.zshrc`) is updated with the paths GHCup uses. The GHCup installer usually does this for you, but you can always check and add them manually if needed. They typically involve adding `~/.ghcup/bin` to your `PATH`.

### 3. Install Cabal

While GHCup can install Cabal for you, here’s how to do it manually:

```bash
ghcup install cabal
```

Then, update Cabal's package list:

```bash
cabal update
```

### 4. Install Stack (Optional)

If you prefer Stack over Cabal, you can install it via GHCup or download it directly:

```bash
ghcup install stack
```

Or, follow the instructions from the Stack website: [https://docs.haskellstack.org/en/stable/install_and_upgrade/](https://docs.haskellstack.org/en/stable/install_and_upgrade/).

### 5. Install Haskell Language Server (Optional)

Finally, if you want Haskell IDE features, you can install the Haskell Language Server:

```bash
ghcup install hls
```

Make sure that your text editor or IDE is configured to find and use the HLS binary.

### Verification

After installation, verify that each component is correctly installed:

- Check GHC: `ghc --version`
- Check Cabal: `cabal --version`
- Check Stack: `stack --version`
- Check HLS: `haskell-language-server --version`

Remember, paths and commands may vary depending on your Linux distribution and shell. Adjust the commands accordingly, and make sure to reopen your terminal or source your profile after installation to update your environment variables. If you encounter any issues, please provide the error messages or describe the problem, and I can give more specific advice.