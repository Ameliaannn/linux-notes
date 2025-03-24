## Part 3: Command Collection (System, Files, Processes, Logs)

### Navigation
```
ls <options> <path>        # List files  
  -l    # Long format  
  -a    # Include hidden  
  -h    # Human-readable size  
  -t    # Sort by time  
  -r    # Reverse sort  

cd <path>                  # Change directory  
pwd                        # Show current path  
```

### File & Directory Operations
```
touch <file>               # Create file  
mkdir <dir>                # Create directory  
mkdir -p <dir/dir2>        # Recursive mkdir  
cp <src> <dest>            # Copy file  
cp -r <src> <dest>         # Copy directory  
mv <src> <dest>            # Move / rename  
rm <file>                  # Delete file  
rm -r <dir>                # Delete directory recursively  
rm -rf <dir>               # Force delete  
rmdir <empty-dir>          # Remove empty directory  
```

### Links & Inodes
```
ln <file> <hardlink>       # Create hard link  
ln -s <file> <symlink>     # Create symbolic (soft) link  
inode                      # Metadata identifier  
```

### User & Group Management
```
useradd <options> <user>          # Add user  
  -m    # Create home directory  
  -s    # Set shell  
  -u    # Set UID  
  -g    # Set group  

usermod <options> <user>          # Modify user  
  -l    # Rename  
  -L    # Lock  
  -U    # Unlock  

userdel <options> <user>          # Delete user  
  -r    # Remove home directory  

groupadd <options> <group>        # Add group  
groupdel <group>                  # Delete group  

passwd <options> <user>           # Change password  
su <user>                         # Switch user  
sudo <command>                    # Run as root  
visudo                            # Edit sudoers file  
```

### Permissions & Ownership
```
chmod <options> <file>            # Change permission  
  +x    # Add execute  
  -x    # Remove execute  
  ug+x  # Add to user/group  

chown <user>:<group> <file>       # Change owner  
chgrp <group> <file>              # Change group  
```

### Search & Filter
```
grep -n "keyword" <file>          # Search with line number  
find <path> -name <filename>      # Find by name  
find -perm <permission>           # Find by permission  
find -user <username>             # Find by owner  
```

### Redirection & Pipes
```
command > file              # Redirect output  
command >> file             # Append output  
command < file              # Redirect input  
command 2> error.log        # Redirect error  
cmd1 | cmd2                 # Pipe output to next  
```

### Packaging & Compression
```
tar <options> <file>              # Package & compress  
  -c    # Create  
  -v    # Verbose  
  -f    # Filename  
  -z    # Gzip  
  -x    # Extract  

tar -zcvf a.tar.gz <dir>          # Compress  
tar -zxvf a.tar.gz                # Extract  
gzip <file>                       # Compress file  
gunzip <file.gz>                  # Decompress  
```

### Logs (View & Analyze)
```
cat /var/log/syslog               # Ubuntu system log  
cat /var/log/messages             # CentOS system log  
tail -n <lines> <log>             # View tail  
tail -f <log>                     # Live log view  
less <log>                        # Paginated log view  
grep <keyword> <log>              # Filter logs by keyword  
```

### System Resource Monitoring
```
top                               # Live CPU & memory  
htop                              # Enhanced top (optional)  
free -h                           # View memory usage  
df -h                             # Disk space  
du -sh <dir>                      # Dir size summary  
ps aux                            # Show all processes  
ps -ef | grep <name>              # Filter by process name  
```

### JAR File Operations
```
java -jar <app>.jar              # Run JAR  
nohup java -jar <app>.jar &      # Run in background  
ps -ef | grep <app>.jar          # Find JAR process  
kill <PID>                       # Kill process  
kill -9 <PID>                    # Force kill  
```

### System Commands
```
wget -b <URL>                    # Background download  
reboot                           # Reboot system  
poweroff                         # Shut down  
```
