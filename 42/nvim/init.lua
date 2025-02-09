require("loukasse.plugins-setup")
require("loukasse.core.options")
require("loukasse.core.keymaps")
require("loukasse.core.colorscheme")
require("loukasse.plugins.comment")
require("loukasse.plugins.nvim-tree")
require("loukasse.plugins.lualine")
require("loukasse.plugins.telescope")
require("loukasse.plugins.nvim-cmp")
require("loukasse.plugins.autopairs")
require("loukasse.plugins.treesitter")
require("loukasse.plugins.gitsigns")

vim.opt.autoindent = true   -- Garde l'indentation de la ligne précédente
vim.opt.smartindent = true  -- Indente intelligemment selon la syntaxe
vim.opt.expandtab = true    -- Utilise des espaces au lieu des tabulations
vim.opt.shiftwidth = 4      -- Nombre d'espaces pour une indentation
vim.opt.tabstop = 4         -- Largeur d'un tab
vim.opt.softtabstop = 4     -- Rend les tabs plus fluides

