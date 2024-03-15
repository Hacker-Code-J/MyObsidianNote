
```bash
sudo apt remove neovim
```

### Pre-built archives

Pre-built binaries for Linux systems.
```shell
curl -LO https://github.com/neovim/neovim/releases/latest/download/nvim-linux64.tar.gz
sudo rm -rf /opt/nvim
sudo tar -C /opt -xzf nvim-linux64.tar.gz
```

After this step add this to `~/.bashrc`:
```
export PATH="$PATH:/opt/nvim-linux64/bin"
```

### Debian

Neovim is in [Debian](https://packages.debian.org/search?keywords=neovim).

```
sudo apt-get install neovim
```

Python (`:python`) support is installable via the package manager on Debian unstable.

```
sudo apt-get install python3-neovim
```