This project will create a simple parallel task manager that uses multiple processes and threads to execute tasks. 
The manager will use fork() and exec() to create new processes for different tasks, and it will use threads to monitor these tasks.
Mutexes will be used to ensure that only one thread at a time can access a shared log file, preventing data corruption.