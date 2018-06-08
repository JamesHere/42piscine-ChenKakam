/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 23:05:00 by kachen            #+#    #+#             */
/*   Updated: 2018/05/19 23:05:01 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


//**calculate the total length (width) of base; input:size/height
int baseLength(int height, int size, int error)
{
	if (size == 1)
	{
		return (7);
	}
	int base;

	base = 7;
	base = base + 2 * (height - 3) + (size - 1)*4;

	int index = 0;
	base += error;
	return (base);
}

//**calculate the total height (step); input:size
int	totalHeight(int size)
{
	int height;
	int addition;
	int base;
	int index;

	addition = 3;
	index = 1;
	height = 0;
	while (index <= size)
	{
		height += addition;
		index++;
		addition++;
	}
	return (height);
}



//calculate and print out the space before the valid character
//floor should be 0 for the size 1
void	printSpace(int base, int cHeight, int cFloor, int error)
{
	int half;
	int deletion;

	deletion = cHeight + cFloor*2 + error/2;
	half = base / 2;
	while ((half - deletion) >= 1)
	{
		ft_putchar(' ');
		deletion++;
	}
}


void	current(int height, int *floorCnt, int *index, int *cFloor)
{
	if (*index == *floorCnt)
	{
		*cFloor = *cFloor + 1;
		*floorCnt = *floorCnt + 1;
		*index = 1;
	}
	else
	{
		*index = *index + 1;
	}
}

void	printDoor(int size, int cHeight, int height, int base, int *index, int cBase)
{
	int door;
	int dollarCnt;


	if (size % 2 == 0)
	{
		door = size - 1;
	}
	else
	{
		door = size;
	}

	if(size >= 5)
	{
		dollarCnt =door/2 + 1; 
	}
	else
	{
		dollarCnt = -42;
	}
	if (cHeight + door - 1 >= height)
	{
		if (*index +1 >= (cBase/2+1) - (door/2) && *index + 1 <= (cBase/2+1) + (door/2))
		{
			if (cHeight + dollarCnt == height + 1 && *index + 1 == (cBase/2+1) + (door/2) - 1)
			{
				ft_putchar('$');
			}
			else
			{
				ft_putchar('|');
			}
			
		}
		else
		{
			ft_putchar('*');
		}

	}
	else
	{
		ft_putchar('*');
	}
}


void	printStar(int size, int base, int cFloor, int cHeight, int height)
{
	int cBase; //totoal width of the current base
	int index;
	int error;

	error = 0;
	cBase = 1;
	cBase += (2*cHeight) + cFloor * 4;
	index=0;
	while (index < cBase + error)
	{	if(index == 0)
		{
			ft_putchar('/');
		}
		else if (index + 1 == (cBase + error))
		{
			ft_putchar('\\');
		}
		else
		{
			//ft_putchar('*');
			printDoor(size, cHeight, height, base, &index, cBase);
		}
		index++;
	}

}



void	sastantua(int size)
{
	if (size >= 1)
	{
		int height;
		int base;
		int cHeight;//current height-start with 1
		int cFloor; //current floor-start with 0;
		int floorCnt;
		int index;
		int error = 0;
		int errorAddition = 3;
		int temp = size;

		while (temp > 3)
		{
			error += (size - 3)*2;
			temp--;
		}
		cHeight = 1;
		cFloor = 0;
		floorCnt = 3;
		index = 1; //it should be 1 since floorCnt = 3;
		height = totalHeight(size);
		base = baseLength(height, size, error);
		while (cHeight <= height)
		{
			printSpace(base, cHeight, cFloor, error);
			printStar(size, base, cFloor, cHeight, height);
			ft_putchar('\n');
			cHeight++;
			current(height, &floorCnt, &index, &cFloor);
		}
	}
}


int main()
{
	sastantua(5);
	
	return (0);
}