/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoteris <noterisarthur42@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 01:05:04 by anoteris          #+#    #+#             */
/*   Updated: 2025/01/09 05:58:44 by anoteris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	free_table(t_table *table)
{
	pthread_mutex_destroy(&table->mutex_update);
	free(table);
}

void	free_philo(t_philo *philo)
{
	pthread_mutex_destroy(&philo->right_fork);
	free(philo);
}
void	free_philos(t_philo **philosophers, int nb_philos)
{
	while (nb_philos--)
		free_philo(philosophers[nb_philos]);
	free(philosophers);
}