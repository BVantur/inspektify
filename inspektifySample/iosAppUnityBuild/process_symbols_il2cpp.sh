#!/bin/sh

#  process_symbols_il2cpp
#
#  Copyright (c) 2022 Unity Technologies. All rights reserved.

if [ "$(arch)" == "arm64" ]; then
  usymtool="usymtoolarm64"
else
  usymtool="usymtool"
fi

"$PROJECT_DIR/$usymtool" -localFile "$DWARF_DSYM_FOLDER_PATH/$DWARF_DSYM_FILE_NAME/Contents/Resources/DWARF/UnityFramework" -il2cppOutputPath "$PROJECT_DIR/Il2CppOutputProject/Source/il2cppOutput/" -il2cppFileRoot "$PROJECT_DIR/Il2CppOutputProject/Source/il2cppOutput/" -lite -usymOutputPath "$PROJECT_DIR/Data/Managed/il2cpp.usym"
