local status, _ = pcall (vim.cmd, "colorscheme kanagawa-wave")
if not status then
  printf("Colorscheme not found!")
  return
end

