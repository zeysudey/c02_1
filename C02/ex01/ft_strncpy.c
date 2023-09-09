/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:52:52 by zyilmaz           #+#    #+#             */
/*   Updated: 2023/09/09 19:31:06 by zyilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src,unsigned	int	n)
{
	int i;
	i = 0;
    
	while (src[i] && i<n )
	{
		dest[i] = src[i];
		i++;
	}





	return (dest);
}
int main()
{
	char src[] = "buna";
    char dest[] = "irlestir";
	printf("dest:%s", ft_strncpy(dest,src,2));
}
