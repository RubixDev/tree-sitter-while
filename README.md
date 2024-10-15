# tree-sitter-while

[while](https://github.com/RubixDev/while-lang) grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Usage in Neovim

### Parser Installation

To use this parser you must manually add it to your tree-sitter config and then
install it with `:TSInstall while` or by adding it to your `ensure_installed`
list:

```lua
require('nvim-treesitter.parsers').get_parser_configs()['while'] = {
    install_info = {
        url = 'https://github.com/RubixDev/tree-sitter-while.git',
        files = { 'src/parser.c' },
        branch = 'main',
    },
}
```

### File type detection

You will likely also have to add the `while` file type:

```lua
vim.filetype.add { extension = { ['while'] = 'while' } }
```

### Highlighting

If you want to use this parser for highlighting, you will also have to add this
repository as a plugin, for example for packer.nvim add this:

```lua
use { 'RubixDev/tree-sitter-while' }
```
