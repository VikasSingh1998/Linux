Working with Directories in Linux
===================================
1) Creating Directories ==> In Linux, directories (folders) can be created using the "mkdir" (make directory) command.

Basic Directory Creation
--------------------------
1. Create a single directory ==> mkdir dir1
This creates a directory named dir1. 
  
2. Create multiple directories at once ==> mkdir dir1 dir2 dir3  
This creates dir1, dir2, and dir3 in the current directory.

Creating Nested Directories
----------------------------
1. Create a directory inside another existing directory ==> mkdir dir1/dir2/dir3
⚠️ Note: This works only if dir1 and dir2 already exist.

2. Create a full directory path (including parent directories if they don’t exist): ==> mkdir -p dir1/dir2/dir3
-p stands for "parents" – it ensures all parent directories in the path are created automatically.


