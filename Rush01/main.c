#include <unistd.h>

int 	main(void)
{
	if(col <= 0 || col >= 5)
	{
		write(1, "Please enter parameters less than 5 or greater than 0.", 53);
	}
		else if(row <= 0 || row >= 5)
		{
			write(1, "Please enter parameters less than 5  or greater than 0.", 53);
		}
		return (0);
}
