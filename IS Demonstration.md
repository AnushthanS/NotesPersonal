### Equipment and Setup:

1. **Physical Devices**:
    
    - **Mac**: Your primary device, which will act as the attacker machine.
    - **Windows Device 1**: Set this up as the victim machine.
    - **Windows Device 2**: Set this up as the router or gateway.
2. **Virtual Machines (VMs)**:
    
    - If needed, you can create virtual machines on your Mac using virtualization software like VirtualBox or VMware Fusion.
    - Create a Windows VM to simulate additional network devices if necessary.

### Network Configuration:

1. **Connectivity**:
    
    - Ensure that all devices, physical and virtual, are connected to the same local network.
    - You can use Ethernet cables or Wi-Fi for connectivity, depending on your setup.
2. **IP Address Configuration**:
    
    - Assign static IP addresses to each device on the network to ensure consistency during the demonstration.
    - Configure the Mac with an IP address in the same subnet as the Windows devices.
    - Set up appropriate IP addresses for the victim and router Windows devices.

### Software and Tools:

1. **ARP Spoofing Tool**:
    
    - Install an ARP spoofing tool on your Mac. You can use tools like Ettercap, ARPspoof, or Bettercap. These tools often have versions compatible with macOS.
2. **Packet Sniffing Software**:
    
    - Install packet sniffing software like Wireshark on your Mac to capture network traffic during the demonstration.

### Demonstration Steps:

1. **Set up the Network**:
    
    - Ensure that all devices are connected to the network and can communicate with each other.
2. **Perform ARP Poisoning**:
    
    - Use the ARP spoofing tool on your Mac to perform ARP poisoning against the victim Windows device, redirecting its traffic through your Mac.
    - Confirm that ARP cache on the victim Windows device is poisoned by checking its ARP table.
3. **Intercept Traffic**:
    
    - Use Wireshark on your Mac to capture and analyze the network traffic passing through your device.
    - Show captured packets containing sensitive information, such as HTTP requests, login credentials, or DNS queries.
4. **Demonstrate MITM Attacks**:
    
    - Utilize the intercepted traffic to demonstrate various Man-in-the-Middle attacks, such as session hijacking or DNS spoofing.
5. **Discuss Detection and Mitigation**:
    
    - Discuss methods to detect and prevent ARP poisoning attacks, as well as general network security best practices.
6. **Ethical Considerations**:
    
    - Emphasize the importance of conducting the demonstration ethically and responsibly.

---- 
## Manual IP config
1. **Identify the IP Address Range**: Determine the IP address range of your network. This typically involves checking your router's configuration or contacting your network administrator.
    
2. **Assign IP Addresses**:
    
    - **Mac**: Go to System Preferences > Network. Select the network interface you're using (Wi-Fi or Ethernet) and click on "Advanced." Then, go to the "TCP/IP" tab and manually configure the IP address settings. Use an IP address within the same subnet as the Windows devices, but make sure it's not already in use.
    - **Windows Devices**: Right-click on the network icon in the system tray and select "Open Network & Internet settings" (Windows 10/11). Then, click on "Change adapter options." Right-click on the appropriate network adapter, select "Properties," and then double-click on "Internet Protocol Version 4 (TCP/IPv4)" to configure the IP address settings. Assign static IP addresses within the same subnet as the Mac and router, ensuring they are unique and not already in use.
3. **Configure Subnet Mask and Default Gateway**:
    
    - Set the subnet mask to match the subnet of your network (usually 255.255.255.0 for small networks).
    - Set the default gateway to the IP address of your router (Windows) or the IP address of the interface connecting to the router (Mac).
4. **DNS Configuration (Optional)**:
    
    - You can manually configure DNS servers on each device, typically using the IP address of your router or public DNS servers like those provided by Google (8.8.8.8 and 8.8.4.4) or Cloudflare (1.1.1.1).
5. **Verify Connectivity**:
    
    - After configuring the IP addresses, subnet mask, default gateway, and DNS settings, verify connectivity between all devices by attempting to ping each device from the others.
6. **Document Settings**:
    
    - Make a note of the assigned IP addresses, subnet mask, default gateway, and DNS settings for each device. This documentation will be helpful for reference during the demonstration.