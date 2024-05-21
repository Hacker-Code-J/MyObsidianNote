
# Common Linux Commands for Developers

## File Operations
- `ls`: List directory contents.
- `cd [directory]`: Change the current directory.
- `pwd`: Print the working directory.
- `cp [source] [destination]`: Copy files or directories.
- `mv [source] [destination]`: Move or rename files or directories.
- `rm [file]`: Remove (delete) files.
- `mkdir [directory]`: Create a new directory.

## Text Processing
- `cat [file]`: Display file content.
- `more [file]`: View file content page by page.
- `less [file]`: View file content in an interactive interface.
- `grep [pattern] [file]`: Search for a pattern in a file.
- `sed [options]`: Stream editor for filtering and transforming text.
- `awk [options]`: Pattern scanning and processing language.

## System Monitoring and Management
- `top`: Display Linux processes.
- `ps [options]`: Report a snapshot of current processes.
- `kill [options] [process_id]`: Send a signal to a process.
- `df`: Report file system disk space usage.
- `du`: Estimate file space usage.
- `free`: Display memory and swap usage.

## Network Operations
- `ping [host]`: Check the network connection to a host.
- `ifconfig`: Configure a network interface.
- `netstat`: Print network connections, routing tables, interface statistics.
- `ssh [user@]hostname`: Connect to a remote Linux machine over SSH.
- `scp [source] [destination]`: Secure copy files between hosts on a network.

## Package Management (Debian/Ubuntu)
- `apt-get update`: Update package index files.
- `apt-get upgrade`: Upgrade all packages.
- `apt-get install [package]`: Install a new package.
- `apt-get remove [package]`: Remove an installed package.

## Version Control
- `git clone [repository]`: Clone a repository into a new directory.
- `git pull`: Fetch from and integrate with another repository or a local branch.
- `git push`: Update remote refs along with associated objects.
- `git status`: Show the working tree status.
- `git add [file]`: Add file contents to the index.
- `git commit -m "[message]"`: Record changes to the repository.

---

# Professional Workflow for File Operations in Linux

## Creating and Navigating Directories

1. **Create a New Directory**:
   - Use `mkdir [directory_name]` to create a new directory.
   - Example: `mkdir project_files` creates a new directory named `project_files`.

2. **Change Directory**:
   - Use `cd [directory_path]` to change your current directory.
   - Example: `cd project_files` moves you into the `project_files` directory.

3. **View Current Directory**:
   - Use `pwd` to display the path of the current directory.

## Managing Files

1. **List Files and Directories**:
   - Use `ls` to list the contents of a directory.
   - Use `ls -l` for a detailed list, `ls -a` to include hidden files.

2. **Creating a New File**:
   - Use `touch [file_name]` to create a new file.
   - Example: `touch index.html` creates a new file named `index.html`.

3. **Copying Files**:
   - Use `cp [source] [destination]` to copy files.
   - Example: `cp index.html backup_index.html` copies `index.html` to `backup_index.html`.

4. **Moving or Renaming Files**:
   - Use `mv [source] [destination]` to move or rename files.
   - Example: `mv index.html new_index.html` renames `index.html` to `new_index.html`.

5. **Deleting Files**:
   - Use `rm [file_name]` to delete a file.
   - Use `rm -i [file_name]` to prompt for confirmation before deleting.

## Advanced Operations

1. **Viewing File Content**:
   - Use `cat [file_name]` for a quick view of file contents.
   - Use `less [file_name]` or `more [file_name]` for controlled viewing.

2. **Editing Files**:
   - Use a text editor like `nano [file_name]`, `vi [file_name]`, or `vim [file_name]` to edit files.

3. **Finding Files**:
   - Use `find [directory] -name [search_pattern]` to find files.
   - Example: `find . -name "*.html"` finds all HTML files in the current directory and subdirectories.

4. **Linking Files**:
   - Use `ln -s [target_file] [link_name]` to create a symbolic link.
   - Example: `ln -s /path/to/original /path/to/link` creates a new symbolic link.

## Best Practices

- Always verify the current directory with `pwd` before performing file operations.
- Use `ls` and `ls -l` to check directory contents and file details.
- Employ `mv` and `cp` with caution; consider using the `-i` flag to avoid unintentional overwriting.
- Regularly backup important files and directories.
- When deleting files, double-check the file name and path. Consider using `rm -i` for an additional confirmation step.

---

# Professional Workflow for File Operations in Linux

| Operation                  | Command                                   | Example                                 | Description                                       |
| -------------------------- | ----------------------------------------- | --------------------------------------- | ------------------------------------------------- |
| **Create a New Directory** | `mkdir [directory_name]`                  | `mkdir project_files`                   | Creates a new directory.                          |
| **Change Directory**       | `cd [directory_path]`                     | `cd project_files`                      | Changes your current directory.                   |
| **View Current Directory** | `pwd`                                     | `pwd`                                   | Displays the path of the current directory.       |
| **List Files/Directories** | `ls`, `ls -l`, `ls -a`                    | `ls -l`                                 | Lists the contents of a directory.                |
| **Create a New File**      | `touch [file_name]`                       | `touch index.html`                      | Creates a new file.                               |
| **Copy Files**             | `cp [source] [destination]`               | `cp index.html backup_index.html`       | Copies files.                                     |
| **Move/Rename Files**      | `mv [source] [destination]`               | `mv index.html new_index.html`          | Moves or renames files.                           |
| **Delete Files**           | `rm [file_name]`, `rm -i [file_name]`     | `rm -i old_file.html`                   | Deletes files, with `-i` for confirmation prompt. |
| **View File Content**      | `cat [file_name]`, `less [file_name]`     | `less index.html`                       | Displays file content, with paging for `less`.    |
| **Edit Files**             | `nano [file_name]`, `vi [file_name]`,     | `vi index.html`                         | Edits files using a text editor.                  |
| **Find Files**             | `find [directory] -name [search_pattern]` | `find . -name "*.html"`                 | Searches for files matching a pattern.            |
| **Linking Files**          | `ln -s [target_file] [link_name]`         | `ln -s /path/to/original /path/to/link` | Creates a symbolic link to a file.                |

## Best Practices

- Verify current directory with `pwd` before performing operations.
- Use `ls` to check contents before moving or deleting files.
- Employ `mv` and `cp` with caution, consider using `-i` flag.
- Backup important files regularly.
- Double-check file names and paths, especially when using `rm`.


---
1. **Set Up a Practice Environment**:
    - Open your terminal.
    - Create a new directory for practice: `mkdir command_practice`.
    - Navigate into this directory: `cd command_practice`.
    - Confirm the current directory: `pwd`. The output should end with `/command_practice`.
2. **Practice File Creation and Viewing**:
    - Create new files: `touch practice.txt`, `touch example.txt`, and `touch sample.txt`.
    - List files to confirm creation: `ls`.
    - View the file's contents (they will be empty): `cat practice.txt`.
    - Edit `practice.txt` using a text editor (e.g., `vi practice.txt`), add some text, then save and exit.
        - press `i`
        - Input `It is practice.txt`
        - press `Esc`
        - Input `:wq!` > `Enter`
    - View the updated contents: `cat practice.txt`.
3. **Directory Operations**:
    - Create new directories: `mkdir archive` and `mkdir test_files`.
    - Move `example.txt` to `test_files`: `mv example.txt test_files/`.
    - Verify the move: `ls test_files`.
4. **Copying and Renaming Files**:
    - Copy `practice.txt` to `archive`: `cp practice.txt archive/`.
    - Rename `sample.txt` to `demo.txt`: `mv sample.txt demo.txt`.
    - Verify changes: `ls` and `ls archive/`.
5. **Using the `find` Command**:
    - Search for files named `practice.txt` within the current directory: `find . -name "practice.txt"`.
    - Look for all `.txt` files in the current directory: `find . -type f -name "*.txt"`.
6. **File Deletion and Cleanup**:
    - Remove individual files: `rm demo.txt`.
    - Remove entire directories and their contents: `rm -r archive` and `rm -r test_files`.
    - Confirm the removal: `ls`.
7. **Review and Reflect**:
    - Reflect on the usage of each command: its function, options, and effects.
    - Practice different options and variations, like `find . -type f -name "*.html"`, or `ls -lh`.
8. **Cleanup**:
    - Exit the `command_practice` directory: `cd ..`.
    - Delete the practice directory: `rm -r command_practice`.
    - Confirm its deletion: `ls`.