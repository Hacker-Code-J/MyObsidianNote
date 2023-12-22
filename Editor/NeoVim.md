
- [ ] https://www.youtube.com/watch?v=8HogB0SxKjA
- [ ] https://www.youtube.com/watch?v=Oj0if8rL-wo&list=PLGPF8gvWLYyrmWBOzypMlVgWKfqTzYvgQ
- [ ] https://www.youtube.com/watch?v=cY0JxzENBJg&t=4s

## Neovim
https://www.youtube.com/watch?v=vdn_pKJUda8

#  **1. Installation** 

```zsh
$ sudo apt-get install neovim
$ nvim --version
NVIM v0.6.1
Build type: Release
LuaJIT 2.1.0-beta3
Compiled by team+vim@tracker.debian.org

Features: +acl +iconv +tui
See ":help feature-compile"

   system vimrc file: "$VIM/sysinit.vim"
  fall-back for $VIM: "/usr/share/nvim"

Run :checkhealth for more info
```

#  **2. File Structure** 

```css
~./config/
└── nvim/
	├── init.lua
	└── lua/
		└── [your name]/
			├── core/
			│   ├── colorscheme.lua
			│   ├── keymaps.lua
			│   └── options.lua
			├── plugins/
			│   ├── lualine.lua
			│   ├── telescope.lua
			│   ├── nvim-tree.lua
			│   └── ....
			└── plugins-setup.lua
```

```zsh
$ cd .config
$ mkdir nvim
$ cd nvim
$ touch init.lua
$ mkdir lua
$ cd lua
$ mkdir hacker-code-j
$ cd hacker-code-j
$ mkdir core
$ mkdir plugins
$ touch plugins-setup.lua
$ cd core
$ touch colorscheme.lua
$ touch keymaps.lua
$ touch options.lua
$ cd ../../..
```

```zsh
$ nvim init.lua
require("hacker-code-j.core.options")
require("hacker-code-j.core.keymaps") 
require("hacker-code-j.core.colorscheme")

:wq

$ cd lua/hacker-code-j/core
$ nvim options.lua
local opt = vim.opt -- for conciseness

-- line numbers
opt.relativenumber = true
opt.number = true

-- tabs & indentation
opt.tabstop = 2
opt.shiftwidth = 2
opt.expandtab = true
opt.autoindent = true

-- line wrapping
opt.wrap = false

-- search
opt.ignorecase = true
opt.smartcase = true

-- cursor line
opt.cursorline = true
opt.background = "dark"
opt.signcolumn = "yes"

-- backspace



```