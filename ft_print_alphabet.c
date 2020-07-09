void ft_putchar (char ch)
{
	write(1,8ch,1);
}

void ft_print_alphabet(void)
{
	char alpha = 'a';
	while(alpha =< 'z')
		ft_putchar(alpha);
	alpha++;
}
