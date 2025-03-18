Example2:
==========
ubuntu@ubuntu-VirtualBox:~/linux_learning$ rm -r *
ubuntu@ubuntu-VirtualBox:~/linux_learning$ ls
ubuntu@ubuntu-VirtualBox:~/linux_learning$ mkdir -p {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}
ubuntu@ubuntu-VirtualBox:~/linux_learning$ ls
dir1  dir2  dir3
ubuntu@ubuntu-VirtualBox:~/linux_learning$ cd dir1/
ubuntu@ubuntu-VirtualBox:~/linux_learning/dir1$ ls
apr_1  apr_3  feb_1  feb_3  jan_1  jan_3  mar_1  mar_3
apr_2  apr_4  feb_2  feb_4  jan_2  jan_4  mar_2  mar_4
ubuntu@ubuntu-VirtualBox:~/linux_learning/dir1$ cd ..
ubuntu@ubuntu-VirtualBox:~/linux_learning$ cd dir2/
ubuntu@ubuntu-VirtualBox:~/linux_learning/dir2$ ls
apr_1  apr_3  feb_1  feb_3  jan_1  jan_3  mar_1  mar_3
apr_2  apr_4  feb_2  feb_4  jan_2  jan_4  mar_2  mar_4
ubuntu@ubuntu-VirtualBox:~/linux_learning/dir2$ cd ../dir3
ubuntu@ubuntu-VirtualBox:~/linux_learning/dir3$ ls
apr_1  apr_3  feb_1  feb_3  jan_1  jan_3  mar_1  mar_3
apr_2  apr_4  feb_2  feb_4  jan_2  jan_4  mar_2  mar_4
ubuntu@ubuntu-VirtualBox:~/linux_learning/dir3$ 
====================================================================================================
Explanation:
------------
Step 1: Remove all existing files and directories ==> rm -r *
rm → Remove files and directories.
-r → Recursively delete directories and their contents.
* → Wildcard to delete everything in the current directory (linux_learning).
Now, ls confirms that everything is deleted.
---------------------------------------------
Step 2: Create directories with subdirectories using mkdir -p ==> mkdir -p {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}

mkdir → Create directories.
-p → Ensures that parent directories (dir1, dir2, dir3) are created if they don't exist.
{dir1,dir2,dir3} → Expands into dir1, dir2, and dir3.
{jan,feb,mar,apr} → Expands into jan, feb, mar, and apr.
{1,2,3,4} → Expands into 1, 2, 3, and 4.
Each {month}_{number} folder is created inside every dir1, dir2, and dir3.
===========================================================================================================
Effect of -p vs. Without -p
mkdir -p {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4} VS mkdir {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}
-------------------------------------------------------------------------------------------------------------
With -p:
---------
==> $ mkdir -p {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}
If dir1, dir2, dir3 already exist, it won't give an error.
If they don't exist, it creates them automatically.
The command works smoothly whether the parent directories exist or not.
Without -p:
------------
==> $ mkdir {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}
If dir1, dir2, or dir3 do not exist, the command fails with an error:
mkdir: cannot create directory ‘dir1/jan_1’: No such file or directory
This happens because mkdir does not create parent directories by default.
  
How to Fix Without -p?
------------------------
First, manually create dir1, dir2, dir3:
$ mkdir dir1 dir2 dir3

Then, create subdirectories:
$ mkdir dir1/{jan,feb,mar,apr}_{1,2,3,4}
$ mkdir dir2/{jan,feb,mar,apr}_{1,2,3,4}
$ mkdir dir3/{jan,feb,mar,apr}_{1,2,3,4}
  
Conclusion
-----------
-p is useful when you're unsure if parent directories exist.
Without -p, you must manually create parent directories first, otherwise mkdir fails.
----------------------------------------------------------------------------------------------
Note:
----
$ mkdir dir1/{jan,feb,mar,apr}_{1,2,3,4}
$ mkdir dir2/{jan,feb,mar,apr}_{1,2,3,4}
$ mkdir dir3/{jan,feb,mar,apr}_{1,2,3,4}
are functionally identical to this single command:
$ mkdir {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}

Both methods require dir1, dir2, and dir3 to exist beforehand unless you use mkdir -p.
==================================================================================================
ubuntu@ubuntu-VirtualBox:~/linux_learning$ ls
dir1  dir2  dir3
ubuntu@ubuntu-VirtualBox:~/linux_learning$ touch {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}/file_{1..31}.txt

Explanation:
------------
What Happens Here?
Brace Expansion ({})

{dir1,dir2,dir3} → Expands to: dir1 dir2 dir3
  
{jan,feb,mar,apr}_{1,2,3,4} → Expands to:
jan_1 jan_2 jan_3 jan_4
feb_1 feb_2 feb_3 feb_4
mar_1 mar_2 mar_3 mar_4
apr_1 apr_2 apr_3 apr_4

file_{1..31}.txt → Expands to: file_1.txt file_2.txt ... file_31.txt
  
In total:
Each dirX has 4 (months) × 4 (numbers) = 16 subdirectories.
Each subdirectory has 31 files.
Total files created = 3 (dirs) × 16 (subdirs per dir) × 31 (files per subdir) = 1488 files.
------------------------------------------------------------------------------------------------------------
$ touch -p {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}/file_{1..31}.txt
This will give an error!
Because touch does not support the -p flag.
The -p option is used with mkdir -p to create parent directories if they don’t exist.
In touch, no such flag exists.
==============================================================================================================
What to Do If Directories Don’t Exist?
----------------------------------------
To ensure directories exist, first run:
$ mkdir -p {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}
Then run:
$ touch {dir1,dir2,dir3}/{jan,feb,mar,apr}_{1,2,3,4}/file_{1..31}.txt
===============================================================================================
Case Study-2:
-----------------
Q: Create 5 directories named with dir6,dir7,dir8,dir9 and dir10. In these directories create 
empty files with a.txt,b.txt,c.txt and d.txt

Ans ==> 
$ mkdir dir{6..10}
$ touch dir{6..10}/{a..d}.txt
Note: *,[],{ } etc are called wild characters. We can use wild card characters in every 
command.
=================================================================================================



















