# Bug list of ARC AIoT em9D  

## How to reproduce the bug?   
(Please use following cmd in linux system only, you need to download Synopsys_SDK_V22.01/ by yourself beforehand.)
```bash
$ git clone https://github.com/ARC-AIOT/Bugs
$ mv Bugs Synopsys_SDK_V22.01/
$ cd Synopsys_SDK_V22.01/Bugs/($Bug_Dir_you_want_reproduce)
$ make && make flash
```

Upload the prog to the board (see instruction below), press the rst btn and check if bug happened!
### Upload the prog
1. Use 'make' and 'make flash' command in cygwin and ubuntu to get the image file  
2. Short J11 and J20  
3. Burn the image file into the board  
4. Open J11 and J20  
5. Press the reset button to initialize the system  

### If bug doesn't show up
Just turn the board's switch off and on for few times, the bug should appear eventually.
