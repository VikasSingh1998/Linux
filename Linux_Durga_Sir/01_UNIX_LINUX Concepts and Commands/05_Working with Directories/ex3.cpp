2) Removing Directories
===============================
Directories can be removed using:
rmdir → Removes empty directories only.
rm -r → Removes non-empty directories (including all contents).

Using rmdir (Only for Empty Directories)
----------------------------------------
Remove a single empty directory: ==> rmdir dir1
Remove multiple empty directories: ==> rmdir dir1 dir2 dir3
⚠️ If the directory is not empty, rmdir will fail.

Using rm (For Non-Empty Directories)
-------------------------------------
Remove a non-empty directory and all its contents: ==> rm -r dir1
Alternative syntax (uppercase R works the same way): ==> rm -R heroines
  
⚠️ Warning: Linux has no undo option for rm. Once deleted, files cannot be recovered.

Most Dangerous Linux Command (Use with Extreme Caution) ==> rm -r /
---------------------------------------------------------
This will delete the entire system, making Linux unusable.
================================================================================================
