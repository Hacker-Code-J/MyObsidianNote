
https://www.raspberrypi.com/software/

Setting up a Raspberry Pi 4 using only a Linux laptop is a straightforward process. Here’s a step-by-step guide that will walk you through the entire setup, from preparing the SD card to connecting to the Raspberry Pi remotely using SSH.

### What You'll Need:
1. **Raspberry Pi 4** (or another model)
2. **MicroSD Card** (16GB or larger)
3. **MicroSD Card Reader** (if your laptop doesn't have one)
4. **USB-C Power Supply** for Raspberry Pi 4
5. **Ethernet Cable** (optional for a wired connection)
6. **HDMI Cable** (optional if you want to connect to a monitor)
7. **Linux laptop** with an internet connection
8. **Raspberry Pi OS image** (downloadable from the official site)

### Step 1: Download Raspberry Pi OS Image
Go to the official [Raspberry Pi website](https://www.raspberrypi.org/software/operating-systems/) and download the **Raspberry Pi OS**. You can choose the Lite version if you want to use your Pi headlessly (no GUI), or the Desktop version if you plan to connect a display.

### Step 2: Flash the Raspberry Pi OS Image onto the SD Card
You can use a tool called **`Raspberry Pi Imager`** or **`Etcher`** on your Linux laptop to flash the image onto your SD card.

1. Insert the SD card into your laptop using a card reader.
2. Open a terminal and run the following command to identify the device path of your SD card:
   ```bash
   lsblk
   ```
   This will list your storage devices. Find the one that corresponds to your SD card (likely `/dev/sdX` or `/dev/mmcblkX`).

3. Use **`dd`** or **Etcher** to flash the Raspberry Pi OS image. If using **dd**:
   ```bash
   sudo dd bs=4M if=path_to_image.img of=/dev/sdX conv=fsync status=progress
   ```
   Make sure to replace `path_to_image.img` with the path to the Raspberry Pi OS image and `/dev/sdX` with the correct device path for your SD card.

   If you prefer using Etcher, install it with:
   ```bash
   sudo apt install etcher-electron
   ```
   and follow the GUI to flash the image.

### Step 3: Enable SSH (Headless Setup)
If you plan to use the Raspberry Pi without a monitor (headless setup), you'll need to enable SSH so you can connect to it remotely.

1. After flashing the image, open the boot partition on the SD card.
2. Create an empty file named `ssh` (with no file extension) in the root of the boot partition. This will enable SSH on first boot.
   ```bash
   touch /media/$USER/boot/ssh
   ```

### Step 4: Set Up Wi-Fi (Optional for Headless Setup)
If you want to connect the Raspberry Pi to Wi-Fi without plugging in a monitor and keyboard, you can preconfigure the Wi-Fi settings.

1. In the boot partition of the SD card, create a file named `wpa_supplicant.conf`:
   ```bash
   nano /media/$USER/boot/wpa_supplicant.conf
   ```
2. Add the following configuration to the file, replacing `SSID` with your network name and `PASSWORD` with your Wi-Fi password:
   ```bash
   country=US  # Replace with your country code
   ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
   update_config=1
   network={
      ssid="SSID"
      psk="PASSWORD"
   }
   ```

3. Save and close the file.

### Step 5: Boot the Raspberry Pi
1. Insert the SD card into the Raspberry Pi 4.
2. Plug in the power supply, and optionally connect an Ethernet cable or Wi-Fi.
3. The Raspberry Pi will boot up, and if you enabled SSH, you can now connect to it from your Linux laptop.

### Step 6: Find the IP Address of Your Raspberry Pi
To connect to the Raspberry Pi over SSH, you’ll need its IP address. If you're using a wired connection, you can check the IP address by scanning your local network.

1. On your Linux laptop, use `nmap` or `arp-scan` to find devices on your network:
   ```bash
   sudo apt install nmap
   nmap -sn 192.168.1.0/24
   ```
   Replace `192.168.1.0/24` with your local network's subnet. Look for a device named `raspberrypi`.

2. Alternatively, you can log into your router's web interface to check connected devices.

### Step 7: SSH into the Raspberry Pi
Once you have the IP address of the Raspberry Pi, you can SSH into it from your Linux laptop:

1. Open a terminal on your laptop.
2. Run the following command, replacing `pi_ip_address` with the actual IP address of the Raspberry Pi:
   ```bash
   ssh pi@pi_ip_address
   ```
   The default password is `raspberry`.

3. If you successfully log in, you are now connected to your Raspberry Pi!

### Step 8: Final Setup (Optional)
You can now configure your Raspberry Pi as needed. Some common steps include:

- **Change the default password**:
  ```bash
  passwd
  ```

- **Update and upgrade the system**:
  ```bash
  sudo apt update && sudo apt upgrade -y
  ```

- **Expand the filesystem** (if needed):
  ```bash
  sudo raspi-config
  ```
  In the menu, choose "Advanced Options" and then "Expand Filesystem".

---

### Optional Step: Set up VNC (for remote desktop access)
If you want to use a graphical interface remotely, you can enable **VNC** on the Raspberry Pi and connect from your Linux laptop.

1. Install VNC on the Raspberry Pi:
   ```bash
   sudo apt install realvnc-vnc-server realvnc-vnc-viewer
   ```

2. Enable VNC in `raspi-config`:
   ```bash
   sudo raspi-config
   ```
   Go to "Interfacing Options" and enable VNC.

3. Install a VNC viewer on your Linux laptop and connect to the Raspberry Pi using its IP address.

### That’s it!
You have successfully set up your Raspberry Pi 4 using only a Linux laptop!


---

If you want to connect your Raspberry Pi 4 to the internet using your mobile hotspot, you can configure the Wi-Fi settings to connect to the hotspot instead of a traditional Wi-Fi router. Here's how you can set up the Raspberry Pi 4 to use your mobile hotspot:

### Step 1: Prepare the `wpa_supplicant.conf` File for Mobile Hotspot

When setting up your Raspberry Pi for a headless installation (without a monitor), you can configure the Wi-Fi settings ahead of time to connect to your mobile hotspot. Here’s how to do it:

1. **After flashing the Raspberry Pi OS image onto the SD card** (as described in the previous steps), open the boot partition (this will be accessible on your Linux laptop after flashing).
   
2. **Create the `wpa_supplicant.conf` file** in the boot partition:
   ```bash
   nano /media/$USER/boot/wpa_supplicant.conf
   ```
   This will open a text editor to create the Wi-Fi configuration file.

3. **Add the following Wi-Fi configuration** to the `wpa_supplicant.conf` file, replacing `SSID` and `PASSWORD` with your mobile hotspot's SSID (network name) and password:
   ```bash
   country=US  # Replace with your country code (e.g., US, UK)
   ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
   update_config=1
   network={
       ssid="Your_Hotspot_SSID"
       psk="Your_Hotspot_Password"
       key_mgmt=WPA-PSK
   }
   ```

   - `ssid`: Your mobile hotspot's network name.
   - `psk`: The password for your mobile hotspot.

4. **Save and close the file** (`Ctrl + X`, then `Y`, and press `Enter`).

### Step 2: Enable SSH (Headless Setup)

If you're running the Raspberry Pi without a monitor (headless setup), you also need to enable SSH so you can access the Raspberry Pi from your Linux laptop.

1. **Create an empty file called `ssh` in the boot partition**:
   ```bash
   touch /media/$USER/boot/ssh
   ```

### Step 3: Boot the Raspberry Pi

1. Insert the SD card into your Raspberry Pi 4.
2. Power on the Raspberry Pi using the USB-C power supply.
3. Your Raspberry Pi will attempt to connect to your mobile hotspot using the Wi-Fi configuration you created.

### Step 4: Find the IP Address of the Raspberry Pi

Since your Raspberry Pi will be connected to your mobile hotspot, you need to find its IP address to SSH into it.

1. **Option 1: Use your mobile hotspot management interface** (if available). Many smartphones allow you to view connected devices, and the Raspberry Pi should show up there with an assigned IP address.
   
   - For Android:
     - Go to the **Hotspot settings** on your phone.
     - Check the **connected devices** list for the Raspberry Pi, and note the IP address.
   - For iPhone:
     - In the Personal Hotspot section, you may be able to see the connected devices and their IP addresses.
   
2. **Option 2: Use a network scanning tool** on your Linux laptop to find the Raspberry Pi's IP address:
   ```bash
   sudo nmap -sn 192.168.43.0/24
   ```
   Replace `192.168.43.0/24` with your mobile hotspot's IP range (most hotspots use something like `192.168.43.x` or `172.x.x.x`). This will scan the connected devices, and you should see a device named `raspberrypi`.

### Step 5: SSH into the Raspberry Pi

Now that you have the Raspberry Pi's IP address, you can SSH into it from your Linux laptop.

1. Open a terminal on your Linux laptop.
2. Run the following command, replacing `pi_ip_address` with the actual IP address of the Raspberry Pi:
   ```bash
   ssh pi@pi_ip_address
   ```
   The default username is `pi`, and the default password is `raspberry`.

3. Once you're connected, you'll be able to control your Raspberry Pi remotely.

### Step 6: Set Up the Raspberry Pi (Optional)

Once you’ve connected via SSH, you can configure the Raspberry Pi further, such as:

- **Change the default password**:
   ```bash
   passwd
   ```

- **Update and upgrade the system**:
   ```bash
   sudo apt update && sudo apt upgrade -y
   ```

- **Configure any additional settings** using `raspi-config`:
   ```bash
   sudo raspi-config
   ```

### Notes:
- **Data Usage**: Be mindful that using your mobile hotspot will consume data, so monitor your data usage if you're on a limited plan.
- **Speed**: The performance of your mobile hotspot may vary based on signal strength and the mobile plan you're using. If you encounter any performance issues, check the network quality on your phone.
- **Battery**: Keep in mind that mobile hotspots can drain your smartphone's battery quickly, so ensure your phone is adequately charged.

By following these steps, you should be able to successfully connect your Raspberry Pi 4 to your mobile hotspot and control it from your Linux laptop remotely.


---

