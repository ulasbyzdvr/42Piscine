# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 15:08:51 by ubeyazda          #+#    #+#              #
#    Updated: 2023/09/21 15:23:20 by ubeyazda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY_NAME="libft.a"

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete