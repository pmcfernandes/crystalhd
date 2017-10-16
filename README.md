# Crystal HD Hardware Decoder Driver on Arch Linux kernel 4.9+
## Broadcom BCM70012 & BCM70015

After a lot a retries to get the rigth experience with the Crystal HD on Arch Linux, 

**1. Install required files**

    pacman -S linux49-headers libcrystalhd
    
**2. Get the source**

Get the driver source code from the git repository.

    git clone https://github.com/pmcfernandes/crystalhd.git

_The original repo source is available at https://github.com/yeradis/crystalhd.git
    
**3. Compile driver, install libraries, and load driver**

Use make command to compile driver. If you have multiple core processor then use the “-j2″ or “-j4″ option (2 or 4 is the number of cores). This will speed up the make process.

    cd crystalhd/driver/linux
    autoconf
    ./configure
    make -j2
    sudo make install
    
**5. Load the driver.**

    sudo modprobe crystalhd
    
**6. Reboot your system** , then check if 'crystalhd' is listed in the output of the following commands.

    lsmod | grep crystalhd
    
 Then you should see something like this:
 
    [    4.349765] Loading crystalhd v3.10.0
    [    4.349823] crystalhd 0000:02:00.0: Starting Device:0x1615
    [    4.351848] crystalhd 0000:02:00.0: irq 43 for MSI/MSI-X
    [  108.512135] crystalhd 0000:02:00.0: Opening new user[0] handle
    [  258.976583] crystalhd 0000:02:00.0: Closing user[0] handle via ioctl with mode 10200

Now is time to enjoy our FullHD content. 

I'm using XMBC , VLC (2.1.0), Mplayer2, GStreamer because they are using (they should) the Crystal HD decoder libraries.

For example , lets try VLC :

    vlc --codec=crystalhd ourgreatfullhdmedia.mkv
    
Now runs smoothly rigth ?

# After kernel update

Reinstall the driver.

    cd crystalhd/driver/linux
    sudo make install


So, the sources on this repository are updated with the fixes and patches in order to make your life easier.

## History

See [HISTORY.md](HISTORY.md) for a rough history of the various versions of this driver floating around the web.
