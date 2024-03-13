
### [Switching remote URLs from SSH to HTTPS](https://docs.github.com/en/get-started/getting-started-with-git/managing-remote-repositories#switching-remote-urls-from-ssh-to-https)

1. Open Terminal.
    
2. Change the current working directory to your local project.
    
3. List your existing remotes in order to get the name of the remote you want to change.
    
    ```shell
    $ git remote -v
    > origin  git@github.com:OWNER/REPOSITORY.git (fetch)
    > origin  git@github.com:OWNER/REPOSITORY.git (push)
    ```
    
4. Change your remote's URL from SSH to HTTPS with the `git remote set-url` command.
    
    ```shell
    git remote set-url origin https://github.com/OWNER/REPOSITORY.git
    ```
    
5. Verify that the remote URL has changed.
    
    ```shell
    $ git remote -v
    # Verify new remote URL
    > origin  https://github.com/OWNER/REPOSITORY.git (fetch)
    > origin  https://github.com/OWNER/REPOSITORY.git (push)
    ```

# Create SSH public and private keys

```shell
$ cd ~/.ssh
$ ls ...
```

```bash
ssh-keygen -t ed25519 -C "hacker3740@google.com"
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
```

```shell
$ cat id_ed25519
$ cat id_ed25519.pub
$ ssh -T git@github.com
```

# Git Remote

```shell
$ git remote -v
origin	https://github.com/Hacker-Code-J/MyObsidianMemo.git (fetch)
origin	https://github.com/Hacker-Code-J/MyObsidianMemo.git (push)
            
$ git remote set-url origin git@github.com:Hacker-Code-J/MyObsidianMemo.git
origin	git@github.com:MyObsidianMemo.git (fetch)
origin	git@github.com:MyObsidianMemo.git (push)
```

# Blocking Port

**Alternate Ports**: If your network is blocking port 22, GitHub also supports SSH connections through port 443. You can modify your SSH configuration to use this alternative port by adding the following lines to your `~/.ssh/config` file:

```vim
Host github.com
  Hostname ssh.github.com
  Port 443
  User git
```

