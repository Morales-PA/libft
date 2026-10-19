/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:38:47 by juan              #+#    #+#             */
/*   Updated: 2026/10/13 19:46:24 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct Student {
    int id;
  	char grade;
} s1;

int main() {
    s1 s1 = {1, 'A'};
  
	
  	// Create a copy of student s1
	printf("Student 1 ID: %d\n", s1.id);
    printf("Student 1 Grade: %c", s1.grade);
	printf("\n");
}
