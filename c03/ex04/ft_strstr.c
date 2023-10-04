/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:00:15 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/06 10:11:28 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int len_find;
	int flag;
	int i_find;
	int i_while_second;
	int i_while_str;

	i = 0;
	i_find = 0;
	len_find = 0;
	flag = 0;
	i_while_str = 0;
	while(to_find[i] != '\0')
	{
		len_find++;
	}
	while(str[i] != '\0')
	{
		if(str[i] == to_find[0])
		{
			i_find = 0;
			flag = 0;
			while(to_find[i_find] != '\0')
			{
				if(str[i_while_second] == to_find[i_find])
					flag = 1;
				else
				{
					flag = 0;
					break;
				}
			}			
				i_while_second++;
				i_find++;
			}
		}
		if(boolean == length_find)
		{
			break;
		}
		i++;	
	}

	if (boolean == length_find)
	{
		while (str[i] != '\0')
		{
			str[i_while_str] = str[i];
			i++;
			i_while_str++;
			return (str);
		}
	}

	return 0;
}
int	main(void)
{
	char	src;
	char	to_find;
	char src[40] = "ousar sonhar ousar realizar";
    char to_find[40] = "sonhar";

    printf("%s", strstr(src, to_find));
	printf("%s", ft_strstr(src, to_find));
    return (0);
}

