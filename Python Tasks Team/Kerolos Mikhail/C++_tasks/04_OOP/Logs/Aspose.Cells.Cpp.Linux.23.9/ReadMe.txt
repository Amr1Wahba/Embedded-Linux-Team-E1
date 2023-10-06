Aspose.Cells.Cpp for Linux Readme File
Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.

   
1: Files and Directories Introduction:
   (1) Demo: A demo project including some cases on how to use Aspose.Cells for C++.
       - build:A directory created to run cmake and make 
       - sourceFile: source files for the demo
       - resultFile: result files for the demo
       - CMakeLists.txt: A file for creating the Makefile using cmake command
       - main.cpp: the test file for the demo
   (2) Include : All header files that needed, but usually you only need include Aspose.Cell.h 
                 in your project just like the file main.cpp
   (3) lib64: All libraries files needed to run your program
   (4) Doc: APIs and license document
       - Aspose.Cells for C++.chm: APIs referance
   (5) License: APIs and license document
       - The third party licenses of Aspose.Cells for C++.pdf
       - The End User License Agreement

2: Some possible compiler/running errors and solution
   (1): Can not find uuid.h file. 
        -- sudo apt-get install uuid-dev (ubuntu)
   (2): Can not find glib.h file,or can not find libgdiplus.so
        -- sudo apt-get install libgif-dev autoconf libtool automake build-essential gettext libglib2.0-dev libcairo2-dev libtiff-dev libexif-dev(ubuntu)
   (3): To run the Aspose program correcttly,you must copy font files from Windows to Linux,, as shown below:
        -- mkdir a dir in /usr/share/fonts,e.g. 'myFonts' and then Copy files in windows fonts folder to 'myFonts' 

3: How to compile and run the demo
   (1): cd Demo 
   (2): rm -rf build;mkdir build;cd build
   (2): cmake ..
   (3): make 
   (4): ./demo

4: Software environment:
   (1): Ubuntu 18.04
   (2): gcc>=7.5.0
   (3): cmkae>=3.0

5: Release notes:
   https://docs.aspose.com/cells/cpp/aspose-cells-for-cpp-21-6-release-notes-linux/
