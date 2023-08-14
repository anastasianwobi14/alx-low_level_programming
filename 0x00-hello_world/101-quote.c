#include <unistd.h>
#include <string.h>
/**
 * main - printing without printf and puts
 *
 * Return: Always (1)
 *
 */
int main(void)
{
	char *message;

	message = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));
	return (1);
}
