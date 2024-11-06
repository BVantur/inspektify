#!/bin/sh

#  process_symbols
#
#  Copyright (c) 2015 Unity Technologies. All rights reserved.

if [ "$(arch)" == "arm64" ]; then
  usymtool="usymtoolarm64"
else
  usymtool="usymtool"
fi

if [ "${SYNCHRONOUS_SYMBOL_PROCESSING}" = "TRUE" ]; then
    "$PROJECT_DIR/$usymtool" -symbolPath "$DWARF_DSYM_FOLDER_PATH/$DWARF_DSYM_FILE_NAME" -il2cppOutputPath "$PROJECT_DIR/Il2CppOutputProject/Source/il2cppOutput/"
else
    nohup "$PROJECT_DIR/$usymtool" -symbolPath "$DWARF_DSYM_FOLDER_PATH/$DWARF_DSYM_FILE_NAME" -il2cppOutputPath "$PROJECT_DIR/Il2CppOutputProject/Source/il2cppOutput/" > /dev/null 2>&1 &
    disown
fi
