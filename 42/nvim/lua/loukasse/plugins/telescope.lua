local telescope_setup, telescope = pcall(require, "telescope")
if not telescope_setup then 
  return 
end

local actions_setup, actions = pcall(require, "telescope.actions")
if not actions_setupm then
  return
end

telescope.setup({
  -- configure custom mappings
  defaults = {
    mappings = {
      i = {
        ["<C-k>"] = actions.move_selection_previous, -- move to prev result
        ["<C-j>"] = actions.move_selection_next, -- move to next result
        ["<C-q>"] = actions.send_selected_to_qflist + actions.open_qflist, -- send selected to quickfixlist
      },
    },
    find_command = { "fd", "--type", "f", "--hidden", "--follow" }, -- Force Telescope à utiliser `fd`
    path_display = { "absolute" }, -- Afficher les chemins complets
  },
})

telescope.load_extension("fzf")
