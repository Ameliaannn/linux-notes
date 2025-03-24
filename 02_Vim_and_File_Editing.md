## Part 2: Vim Editor & File Manipulation

### Vim Modes
```
Normal Mode     # Default when opened  
Insert Mode     # Enter via i/a/o  
Command Mode    # Enter via :  
Visual/Replace  # Advanced usage  
```

### Insert Commands
```
i   # Insert before cursor  
a   # Insert after cursor  
I   # Insert at beginning of line  
A   # Append at end of line  
o   # New line below  
O   # New line above  
```

### Save / Exit
```
:wq           # Save and quit  
:q            # Quit  
Esc           # Exit insert mode  
```

### File Viewing
```
cat <file>                 # Display contents  
tac <file>                 # Reverse order display  
nl <file>                  # Show line numbers  
more / less <file>         # Page-by-page view  
head -n <lines> <file>     # First n lines  
tail -n <lines> <file>     # Last n lines  
```

### Cursor Movement
```
h / j / k / l    # Left / Down / Up / Right  
^ / $            # Line start / Line end  
```

### Copy / Paste / Delete
```
yy        # Copy line  
2yy       # Copy 2 lines  
dd        # Delete line  
p         # Paste below  
:set number      # Show line numbers  
:set nonumber    # Hide line numbers  
```

### Search & Navigation
```
Ctrl+f / Ctrl+b       # Page down / up  
Ctrl+u / Ctrl+d       # Half-page up / down  
/keyword              # Search forward  
?keyword              # Search backward  
n / N                 # Next / previous match  
/word\c              # Case-insensitive search  
:set ic               # Set case-insensitive globally  
```

### Replace & Undo
```
:n1,n2s/old/new/g     # Replace in line range  
u                     # Undo  
```

### Vim Configuration
```
vi ~/.vimrc           # Edit Vim config  
```