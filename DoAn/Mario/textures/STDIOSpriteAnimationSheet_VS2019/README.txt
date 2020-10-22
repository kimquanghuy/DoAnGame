SET UP PROJECT

1. ProjectProperty -> Linker -> Input -> Additional Dependencies, add: d3d9.lib;d3dx9.lib
2. VC++ Directories -> Include Derectories, add: $(DXSDK_DIR)\Include;$(IncludePath)
3. VC++ Directories -> Library Derectories, add: $(DXSDK_DIR)\Lib\x86;$(LibraryPath)
4. General -> Character Set, change to: Use Unicode Character Set