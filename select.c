/*All the headers needed for this program*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <string.h>
#include <pthread.h>
#include <mysql.h>

int main(){
         /*base de datos*/
     MYSQL *con = mysql_init(NULL);

  if (con == NULL)
  {
      fprintf(stderr, "mysql_init() failed\n");
      exit(1);
  }

  if (mysql_real_connect(con, "localhost", "cesar", "cesar",
          "wpsite", 0, NULL, 0) == NULL)
  {
      //finish_with_error(con);
  }

  if (mysql_query(con, "select meta_value from wp_frm_item_metas"))
  {
    //  finish_with_error(con);
  }

  MYSQL_RES *result = mysql_store_result(con);

  if (result == NULL)
  {
   //   finish_with_error(con);
  }

  int num_fields = mysql_num_fields(result);
  MYSQL_ROW row;

  while ((row = mysql_fetch_row(result)))
  {
       for(int i = 0; i < num_fields; i++)
       {
        printf("%s\n",row[i]);
      }
  }

  mysql_free_result(result);
  mysql_close(con);
}
