#include "main.h"
#include "holberton.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  char *buff;
  ssize_t rd;
  ssize_t wr;

  if (filename == NULL)
    {
      return (0);
    }

  /* read file*/
  fd = open(filename, O_RDONLY);
  if (fd == -1)
    {
      return (0);
    }
  buff = malloc(sizeof(char) * letters);
  if (buff == NULL)
    {
      free(buff);
      return (0);
    }
  rd = read(fd, buff, letters);
  if (rd == -1)
    {
      free(buff);
      return (0);
    }

  /*write contents of file to buffer*/
  wr = write(STDOUT_FILENO, buff, rd);
  if (wr == -1)
    {
      free(buff);
      return (0);
    }
  free(buff);
  close(fd);
  return(wr);
}
  