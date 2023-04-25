# IoT Final Project
## CMS Page and Database Reading

This repository contains two code files: select.c and Makefile.

select.c is a C program that uses the MySQL C API to connect to a MySQL database and execute a query. The program retrieves the values of the "meta_value" column from the "wp_frm_item_metas" table in the "wpsite" database.

Makefile is a Makefile that compiles the select program from the select.c source file. The program uses the MySQL C API to connect to a MySQL database and execute a query.

To build and run the select program, follow these steps:

- Install the MySQL server and client libraries on your system.

- Open a terminal window and navigate to the directory where the select.c and Makefile files are located.

- Type the command make to compile the select program.

- Once the program is compiled successfully, type the command ./select to run the program.

The program will connect to the MySQL server running on "localhost" with the username "cesar" and the password "cesar". The "wpsite" database is selected, and a query is executed to select the "meta_value" column from the "wp_frm_item_metas" table. The values of the "meta_value" column are then printed to the console.

To clean up the files generated by the make command, type the command make clean. To rebuild the program, type the command make fresh.

```
make
make clean
```
To run the program:
```
./select
```

To install WordPress, follow these steps:

- Download the latest version of WordPress from the official website (https://wordpress.org/download/).

- Extract the downloaded tar file and extract them in a folder.

- Create a MySQL database and user for your WordPress installation. You can use a tool like phpMyAdmin to create the database and user, or you can use the command line if you prefer.

- Rename the wp-config-sample.php file in the WordPress folder to wp-config.php.

- Open the wp-config.php file in a text editor and enter the database name, username, and password that you created in step 3.

- Save the wp-config.php file.

- To access the page, use the Raspberry Pi's IP.
