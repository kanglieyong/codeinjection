##### Code Injection
This is the implementation code from the article "Code Injection into Running Linux Application" from Code Project website

#### Compile Command
```
$ cd ./src
$ LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:.
$ g++ -ggdb -Wall dynlib.cpp -fPIC -shared -o libdynlib.so
$ g++ -ggdb app.cpp -ldynlib -L./ -o app
$ gcc -Wall injection.cpp -c -o injection.o
```

[ref] (https://www.codeproject.com/Articles/33340/Code-Injection-into-Running-Linux-Application)
