# RTR-105
Datormācība (pamatkurss) elektroniskā klade
1  VirtualBox --startvm XP
    2  quartus
    3  firefox &
    4  whoami
    5  who
    6  last
    7  pwd
    8  history
    9  uname
   10  man
   11  man uname
   12  history
1  VirtualBox --startvm XP
    2  quartus
    3  ls -a (ls - list directory contents, a, --all
              do not ignore entries starting with .)
    4  pwd  (pwd - print name of current/working directory)
    5  tree tree - list contents of directories in a tree-
       like format.
    6  mkdir ABC mkdir - make directories
    7  ls -l 
    8  cd ABC/
    9  pwd
   10  tree
   11  cd
   12  pwd
   13  ls
   14  ABC
   15  mkdir ABC
   16  ls -l
   17  ls
   18  cd ABC/
   19  ls
   20  ls -la
   21  pwd
   22  cd .
   23  pwd
   24  cd ..
   25  pwd
   26  cd ..
   27  pwd
   28  ls
   29  ls -la
   30  pwd
   31  cd..
   32  cd ..
   33  pwd
   34  cd ..
   35  pwd
   36  cd
   37  pwd
   38  cd /
   39  pwd
   40  cd /home/user/
   41  pwd
   42  cd /
   43  pwd
   44  cd /home/user/
   45  ls
   46  mkdir EFG
   47  mkdir HIJ
   48  ls -l
   49  touch a.txt
   50  ls -lt
   51  rmdir ABC
   52  ls-lt
   53  ls -lt
   54  echo hello
   55  echo 12345 > b.txt
   56  ls -lt
   57  cat b.txt
   58  echo 12345 > b.txt 67890
   59  cat b.txt
   60  echo 12345 > b.txt
   61  cat b.txt
   62  echo 67890 > b.txt
   63  cat b.txt
   64  nano d.txt
   65  cat dd.txt
   66  hexdump
   67  rm a.txt
   68  mv HIJ KLM
   69  ls -lt
   70  mv b.txt b.text
   71  ls -lt
   72  rm *.txt
   73  ls -lt
   74  pwd
   75  ls -lt
   76  cp b.text KLM/b1.text
   77  rm b.text
   78  ls -lt
   79  cp KLM/b1.text EFG/b2.txt
   80  ls -l KLM/
   81  cd KLM/
   82  ls -lt
   83  cat b1.text
   84  pwd
   85  ls -l /home/user/EFG/
   86  ls -l ../EFG/
   87  pwd
   88  cd ..
   89  ped
   90  pwd
   91  rmdir EFG/
   92  man
   93  rmdir
   94  man rmdir
   95  man -r EFG/
   96  rm -r EFG/
   97  l -lt
   98  ls -lt
   99  history
   1  VirtualBox --startvm XP
    2  quartus
    3  ls
    4  whereis ls
    5  ls -l /bin/ls
    6  cat /bin/ls
    7  whereis ls
    8  echo $PATH
    9  pwd
   10  ls -lt
   11  nano my_first_shell_script.sh
   12  nano my_first shell_script.sh
   13  fg
   14  nano my_first_shell_script.sh
   15  pwd
   16  ls =lt
   17  ls -lt
   18  echo $PATH
   19  pwd
   20  ls -l
   21  ls
   22  pwd
   23  echo $PATH
   24  PATH=$PATH:~
   25  echo $PATH
   26  ls -l
   27  pwd
   28  ls
   29  /home/user/my_first_shell_script.sh
   30  ls -l /bin/ls
   31  ls -l
   32  chmod 754  my_first_shell_script.sh
   33  ls -l
   34  /home/user/my_first_shell_script.sh 
   35  ls -lt
   36  ls -l
   37  ls ABC/
   38  ls EFG/
   39  ls -l EFG/c.txt 
   40  cat my my_first_shell_script.sh 
   41  whoami
   42  groups
   43  history
   
   user@epk428-13:~$ ls -lt
total 36
drwxr-xr-x 2 user user 4096 Aug 26  2019  Downloads
drwxr-xr-x 2 user user 4096 Aug 26  2019  Desktop
drwxrwxr-x 3 user user 4096 Mar 26  2019 'VirtualBox VMs'
drwxrwxr-x 3 user user 4096 Mar  5  2018  Documents
drwxr-xr-x 2 user user 4096 Mar  5  2018  Music
drwxr-xr-x 2 user user 4096 Mar  5  2018  Pictures
drwxr-xr-x 2 user user 4096 Mar  5  2018  Public
drwxr-xr-x 2 user user 4096 Mar  5  2018  Templates
drwxr-xr-x 2 user user 4096 Mar  5  2018  Videos
user@epk428-13:~$ https://github.com/npankovs/RTR-105
bash: https://github.com/npankovs/RTR-105: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105: No such file or directory
bash: https://github.com/npankovs/RTR-105:: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105: No such file or directory
bash: https://github.com/npankovs/RTR-105:: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105: No such file or directory
bash: https://github.com/npankovs/RTR-105:: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105 RTR 105
bash: https://github.com/npankovs/RTR-105: No such file or directory
user@epk428-13:~$ git clone https://github.com/npankovs/RTR-105
Cloning into 'RTR-105'...
remote: Enumerating objects: 15, done.
remote: Counting objects: 100% (15/15), done.
remote: Compressing objects: 100% (10/10), done.
remote: Total 15 (delta 3), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (15/15), done.
user@epk428-13:~$ cd RTR-105
user@epk428-13:~/RTR-105$ cd GCC
bash: cd: GCC: No such file or directory
user@epk428-13:~/RTR-105$ mkdir GCC
user@epk428-13:~/RTR-105$ cd GCC
user@epk428-13:~/RTR-105/GCC$ pwd
/home/user/RTR-105/GCC
user@epk428-13:~/RTR-105/GCC$ cat code1.c
cat: code1.c: No such file or directory
user@epk428-13:~/RTR-105/GCC$ pwd
/home/user/RTR-105/GCC
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 0
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 12 Oct  5 10:41 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main () {}
 ^~~~
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rwxr-xr-x 1 user user 8168 Oct  5 10:43 a.out
-rw-r--r-- 1 user user   12 Oct  5 10:41 code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rwxr-xr-x 1 user user 8168 Oct  5 10:43 a.out
-rw-r--r-- 1 user user   12 Oct  5 10:41 code1.c
user@epk428-13:~/RTR-105/GCC$ echo $?
0
user@epk428-13:~/RTR-105/GCC$ cat code1.c
main () {}

user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 mainn () {}
 ^~~~~
/usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/Scrt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
user@epk428-13:~/RTR-105/GCC$ echo $?
1
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 13 Oct  5 10:47 code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 13 Oct  5 10:47 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:5: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘{’ token
 main{}
     ^
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 8 Oct  5 10:49 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 10 Oct  5 10:50 code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 10 Oct  5 10:50 code1.c
user@epk428-13:~/RTR-105/GCC$ ./code1.out
bash: ./code1.out: No such file or directory
user@epk428-13:~/RTR-105/GCC$ cat code1.c
main(){}

user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){}
 ^~~~
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rwxr-xr-x 1 user user 8168 Oct  5 10:53 a.out
-rw-r--r-- 1 user user   10 Oct  5 10:50 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rw-r--r-- 1 user user   10 Oct  5 10:56 code1.c
-rwxr-xr-x 1 user user 8168 Oct  5 10:53 a.out
user@epk428-13:~/RTR-105/GCC$ ./a.out
user@epk428-13:~/RTR-105/GCC$ echo $?
0
user@epk428-13:~/RTR-105/GCC$ cp code1.c code3.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ gcc code3.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 16
-rwxr-xr-x 1 user user 8168 Oct  5 10:58 a.out
-rw-r--r-- 1 user user   26 Oct  5 10:58 code3.c
-rw-r--r-- 1 user user   10 Oct  5 10:56 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 16
-rw-r--r-- 1 user user   28 Oct  5 11:00 code3.c
-rwxr-xr-x 1 user user 8168 Oct  5 10:58 a.out
-rw-r--r-- 1 user user   10 Oct  5 10:56 code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code3.c
user@epk428-13:~/RTR-105/GCC$ ./a.out
user@epk428-13:~/RTR-105/GCC$ echo $?
100
user@epk428-13:~/RTR-105/GCC$ cat code3.c
int main()
{
return 100;
}

user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
Use "fg" to return to nano.

[1]+  Stopped                 nano code3.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ cp code3.c code4.c
user@epk428-13:~/RTR-105/GCC$ nano code4.c
user@epk428-13:~/RTR-105/GCC$ gcc code4.c
code4.c:1:6: error: two or more data types in declaration specifiers
 void int main()
      ^~~
user@epk428-13:~/RTR-105/GCC$ nano code4.c
user@epk428-13:~/RTR-105/GCC$ gcc code4.c
code4.c:1:6: error: two or more data types in declaration specifiers
 void int main()
      ^~~
user@epk428-13:~/RTR-105/GCC$ nano code4.c
user@epk428-13:~/RTR-105/GCC$ gcc code4.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main ()
 ^~~~
HelloWorld.c: In function ‘main’:
HelloWorld.c:6:1: error: expected ‘;’ before ‘return’
 return 0;
 ^~~~~~
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ cat HelloWorld.c
int main () 
{

//Hello World!
//Hello World!
"Hello World";
return 0;
}

user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c: In function ‘main’:
HelloWorld.c:7:1: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
 printf("Hello World");
 ^~~~~~
HelloWorld.c:7:1: warning: incompatible implicit declaration of built-in function ‘printf’
HelloWorld.c:7:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
HelloWorld.c:8:1: error: unknown type name ‘lai’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
 ^~~
HelloWorld.c:8:12: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘str’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
            ^~~
HelloWorld.c:8:15: error: stray ‘\304’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
               ^
HelloWorld.c:8:16: error: stray ‘\201’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                ^
HelloWorld.c:8:18: error: stray ‘\304’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                  ^
HelloWorld.c:8:19: error: stray ‘\201’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                   ^
HelloWorld.c:8:27: error: stray ‘\304’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                           ^
HelloWorld.c:8:28: error: stray ‘\201’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                            ^
HelloWorld.c:8:34: error: stray ‘\304’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                  ^
HelloWorld.c:8:35: error: stray ‘\223’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                   ^
HelloWorld.c:8:54: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                      ^
HelloWorld.c:8:55: error: stray ‘\223’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                       ^
HelloWorld.c:8:62: error: stray ‘#’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                                                              ^
HelloWorld.c:8:77: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                             ^
HelloWorld.c:8:78: error: stray ‘\253’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                              ^
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c: In function ‘main’:
HelloWorld.c:10:1: error: unknown type name ‘lai’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
 ^~~
HelloWorld.c:10:12: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘str’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
            ^~~
HelloWorld.c:10:15: error: stray ‘\304’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
               ^
HelloWorld.c:10:16: error: stray ‘\201’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                ^
HelloWorld.c:10:18: error: stray ‘\304’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                  ^
HelloWorld.c:10:19: error: stray ‘\201’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                   ^
HelloWorld.c:10:27: error: stray ‘\304’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                           ^
HelloWorld.c:10:28: error: stray ‘\201’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                            ^
HelloWorld.c:10:34: error: stray ‘\304’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                  ^
HelloWorld.c:10:35: error: stray ‘\223’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                   ^
HelloWorld.c:10:54: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                      ^
HelloWorld.c:10:55: error: stray ‘\223’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                       ^
HelloWorld.c:10:62: error: stray ‘#’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                                                              ^
HelloWorld.c:10:77: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                             ^
HelloWorld.c:10:78: error: stray ‘\253’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                              ^
HelloWorld.c: At top level:
HelloWorld.c:14:1: error: unterminated comment
 /*
 ^
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c: In function ‘main’:
HelloWorld.c:10:1: error: unknown type name ‘lai’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
 ^~~
HelloWorld.c:10:12: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘str’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
            ^~~
HelloWorld.c:10:15: error: stray ‘\304’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
               ^
HelloWorld.c:10:16: error: stray ‘\201’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                ^
HelloWorld.c:10:18: error: stray ‘\304’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                  ^
HelloWorld.c:10:19: error: stray ‘\201’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                   ^
HelloWorld.c:10:27: error: stray ‘\304’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                           ^
HelloWorld.c:10:28: error: stray ‘\201’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                            ^
HelloWorld.c:10:34: error: stray ‘\304’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                  ^
HelloWorld.c:10:35: error: stray ‘\223’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                   ^
HelloWorld.c:10:54: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                      ^
HelloWorld.c:10:55: error: stray ‘\223’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                       ^
HelloWorld.c:10:62: error: stray ‘#’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                                                              ^
HelloWorld.c:10:77: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                             ^
HelloWorld.c:10:78: error: stray ‘\253’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                              ^
HelloWorld.c: At top level:
HelloWorld.c:14:1: error: unterminated comment
 /*
 ^
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
Use "fg" to return to nano.

[2]+  Stopped                 nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ 
user@epk428-13:~$ ls -lt
total 36
drwxr-xr-x 2 user user 4096 Aug 26  2019  Downloads
drwxr-xr-x 2 user user 4096 Aug 26  2019  Desktop
drwxrwxr-x 3 user user 4096 Mar 26  2019 'VirtualBox VMs'
drwxrwxr-x 3 user user 4096 Mar  5  2018  Documents
drwxr-xr-x 2 user user 4096 Mar  5  2018  Music
drwxr-xr-x 2 user user 4096 Mar  5  2018  Pictures
drwxr-xr-x 2 user user 4096 Mar  5  2018  Public
drwxr-xr-x 2 user user 4096 Mar  5  2018  Templates
drwxr-xr-x 2 user user 4096 Mar  5  2018  Videos
user@epk428-13:~$ https://github.com/npankovs/RTR-105
bash: https://github.com/npankovs/RTR-105: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105: No such file or directory
bash: https://github.com/npankovs/RTR-105:: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105: No such file or directory
bash: https://github.com/npankovs/RTR-105:: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105: No such file or directory
bash: https://github.com/npankovs/RTR-105:: No such file or directory
user@epk428-13:~$ https://github.com/npankovs/RTR-105 RTR 105
bash: https://github.com/npankovs/RTR-105: No such file or directory
user@epk428-13:~$ git clone https://github.com/npankovs/RTR-105
Cloning into 'RTR-105'...
remote: Enumerating objects: 15, done.
remote: Counting objects: 100% (15/15), done.
remote: Compressing objects: 100% (10/10), done.
remote: Total 15 (delta 3), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (15/15), done.
user@epk428-13:~$ cd RTR-105
user@epk428-13:~/RTR-105$ cd GCC
bash: cd: GCC: No such file or directory
user@epk428-13:~/RTR-105$ mkdir GCC
user@epk428-13:~/RTR-105$ cd GCC
user@epk428-13:~/RTR-105/GCC$ pwd
/home/user/RTR-105/GCC
user@epk428-13:~/RTR-105/GCC$ cat code1.c
cat: code1.c: No such file or directory
user@epk428-13:~/RTR-105/GCC$ pwd
/home/user/RTR-105/GCC
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 0
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 12 Oct  5 10:41 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main () {}
 ^~~~
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rwxr-xr-x 1 user user 8168 Oct  5 10:43 a.out
-rw-r--r-- 1 user user   12 Oct  5 10:41 code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rwxr-xr-x 1 user user 8168 Oct  5 10:43 a.out
-rw-r--r-- 1 user user   12 Oct  5 10:41 code1.c
user@epk428-13:~/RTR-105/GCC$ echo $?
0
user@epk428-13:~/RTR-105/GCC$ cat code1.c
main () {}

user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 mainn () {}
 ^~~~~
/usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/Scrt1.o: In function `_start':
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
user@epk428-13:~/RTR-105/GCC$ echo $?
1
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 13 Oct  5 10:47 code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 13 Oct  5 10:47 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:5: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘{’ token
 main{}
     ^
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 8 Oct  5 10:49 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 10 Oct  5 10:50 code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 4
-rw-r--r-- 1 user user 10 Oct  5 10:50 code1.c
user@epk428-13:~/RTR-105/GCC$ ./code1.out
bash: ./code1.out: No such file or directory
user@epk428-13:~/RTR-105/GCC$ cat code1.c
main(){}

user@epk428-13:~/RTR-105/GCC$ gcc code1.c
code1.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){}
 ^~~~
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rwxr-xr-x 1 user user 8168 Oct  5 10:53 a.out
-rw-r--r-- 1 user user   10 Oct  5 10:50 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code1.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 12
-rw-r--r-- 1 user user   10 Oct  5 10:56 code1.c
-rwxr-xr-x 1 user user 8168 Oct  5 10:53 a.out
user@epk428-13:~/RTR-105/GCC$ ./a.out
user@epk428-13:~/RTR-105/GCC$ echo $?
0
user@epk428-13:~/RTR-105/GCC$ cp code1.c code3.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ gcc code3.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 16
-rwxr-xr-x 1 user user 8168 Oct  5 10:58 a.out
-rw-r--r-- 1 user user   26 Oct  5 10:58 code3.c
-rw-r--r-- 1 user user   10 Oct  5 10:56 code1.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ ls -lt
total 16
-rw-r--r-- 1 user user   28 Oct  5 11:00 code3.c
-rwxr-xr-x 1 user user 8168 Oct  5 10:58 a.out
-rw-r--r-- 1 user user   10 Oct  5 10:56 code1.c
user@epk428-13:~/RTR-105/GCC$ gcc code3.c
user@epk428-13:~/RTR-105/GCC$ ./a.out
user@epk428-13:~/RTR-105/GCC$ echo $?
100
user@epk428-13:~/RTR-105/GCC$ cat code3.c
int main()
{
return 100;
}

user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
Use "fg" to return to nano.

[1]+  Stopped                 nano code3.c
user@epk428-13:~/RTR-105/GCC$ nano code3.c
user@epk428-13:~/RTR-105/GCC$ cp code3.c code4.c
user@epk428-13:~/RTR-105/GCC$ nano code4.c
user@epk428-13:~/RTR-105/GCC$ gcc code4.c
code4.c:1:6: error: two or more data types in declaration specifiers
 void int main()
      ^~~
user@epk428-13:~/RTR-105/GCC$ nano code4.c
user@epk428-13:~/RTR-105/GCC$ gcc code4.c
code4.c:1:6: error: two or more data types in declaration specifiers
 void int main()
      ^~~
user@epk428-13:~/RTR-105/GCC$ nano code4.c
user@epk428-13:~/RTR-105/GCC$ gcc code4.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main ()
 ^~~~
HelloWorld.c: In function ‘main’:
HelloWorld.c:6:1: error: expected ‘;’ before ‘return’
 return 0;
 ^~~~~~
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ cat HelloWorld.c
int main () 
{

//Hello World!
//Hello World!
"Hello World";
return 0;
}

user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c: In function ‘main’:
HelloWorld.c:7:1: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
 printf("Hello World");
 ^~~~~~
HelloWorld.c:7:1: warning: incompatible implicit declaration of built-in function ‘printf’
HelloWorld.c:7:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
HelloWorld.c:8:1: error: unknown type name ‘lai’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
 ^~~
HelloWorld.c:8:12: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘str’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
            ^~~
HelloWorld.c:8:15: error: stray ‘\304’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
               ^
HelloWorld.c:8:16: error: stray ‘\201’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                ^
HelloWorld.c:8:18: error: stray ‘\304’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                  ^
HelloWorld.c:8:19: error: stray ‘\201’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                   ^
HelloWorld.c:8:27: error: stray ‘\304’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                           ^
HelloWorld.c:8:28: error: stray ‘\201’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                            ^
HelloWorld.c:8:34: error: stray ‘\304’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                  ^
HelloWorld.c:8:35: error: stray ‘\223’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                   ^
HelloWorld.c:8:54: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                      ^
HelloWorld.c:8:55: error: stray ‘\223’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                       ^
HelloWorld.c:8:62: error: stray ‘#’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                                                              ^
HelloWorld.c:8:77: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                             ^
HelloWorld.c:8:78: error: stray ‘\253’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                              ^
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c: In function ‘main’:
HelloWorld.c:10:1: error: unknown type name ‘lai’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
 ^~~
HelloWorld.c:10:12: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘str’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
            ^~~
HelloWorld.c:10:15: error: stray ‘\304’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
               ^
HelloWorld.c:10:16: error: stray ‘\201’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                ^
HelloWorld.c:10:18: error: stray ‘\304’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                  ^
HelloWorld.c:10:19: error: stray ‘\201’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                   ^
HelloWorld.c:10:27: error: stray ‘\304’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                           ^
HelloWorld.c:10:28: error: stray ‘\201’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                            ^
HelloWorld.c:10:34: error: stray ‘\304’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                  ^
HelloWorld.c:10:35: error: stray ‘\223’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                   ^
HelloWorld.c:10:54: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                      ^
HelloWorld.c:10:55: error: stray ‘\223’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                       ^
HelloWorld.c:10:62: error: stray ‘#’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                                                              ^
HelloWorld.c:10:77: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                             ^
HelloWorld.c:10:78: error: stray ‘\253’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                              ^
HelloWorld.c: At top level:
HelloWorld.c:14:1: error: unterminated comment
 /*
 ^
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
HelloWorld.c: In function ‘main’:
HelloWorld.c:10:1: error: unknown type name ‘lai’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
 ^~~
HelloWorld.c:10:12: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘str’
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
            ^~~
HelloWorld.c:10:15: error: stray ‘\304’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
               ^
HelloWorld.c:10:16: error: stray ‘\201’ in program
 lai printf str��dātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                ^
HelloWorld.c:10:18: error: stray ‘\304’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                  ^
HelloWorld.c:10:19: error: stray ‘\201’ in program
 lai printf strād��tu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                   ^
HelloWorld.c:10:27: error: stray ‘\304’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                           ^
HelloWorld.c:10:28: error: stray ‘\201’ in program
 lai printf strādātu ir j��pieslēdz stdio.h bibliotēka ar #include direktīvu
                            ^
HelloWorld.c:10:34: error: stray ‘\304’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                  ^
HelloWorld.c:10:35: error: stray ‘\223’ in program
 lai printf strādātu ir jāpiesl��dz stdio.h bibliotēka ar #include direktīvu
                                   ^
HelloWorld.c:10:54: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                      ^
HelloWorld.c:10:55: error: stray ‘\223’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliot��ka ar #include direktīvu
                                                       ^
HelloWorld.c:10:62: error: stray ‘#’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direktīvu
                                                              ^
HelloWorld.c:10:77: error: stray ‘\304’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                             ^
HelloWorld.c:10:78: error: stray ‘\253’ in program
 lai printf strādātu ir jāpieslēdz stdio.h bibliotēka ar #include direkt��vu
                                                                              ^
HelloWorld.c: At top level:
HelloWorld.c:14:1: error: unterminated comment
 /*
 ^
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ gcc HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
Use "fg" to return to nano.

[2]+  Stopped                 nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ nano HelloWorld.c
user@epk428-13:~/RTR-105/GCC$ 


