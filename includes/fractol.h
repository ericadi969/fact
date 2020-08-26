
#ifndef FRACTOL_H

# define FRACTOL_H

# define WIDTH		1000
# define HEIGHT		1000

# define THREADS	10

# include "libft.h"
# include <math.h>
# include <mlx.h>
# include <stdint.h>

typedef	struct		s_color
{
	int8_t			channel[4];
}					t_color;

typedef struct		s_complex
{
	double			real;
	double			imagin;
}					t_complex;

typedef struct		s_image
{
	void			*image;
	char			*data_addr;
	int				bits_per_pixel;
	int				size_line;
	int				endian;
}					t_image;

typedef struct		s_fractol
{
	void			*mlx;
	void			*window;
	t_image			*image;
	int				max_iteration;
	t_complex		min;
	t_complex		max;
	t_complex		factor;
	t_complex		c;
	t_complex		k;
	_Bool			is_julia_fixed;
	int				start_line;
	int				finish_line;
	int				color_shift;
	int				(*formula)(struct s_fractol *fractol);
	_Bool			is_help;
}					t_fractol;

typedef struct		s_formula
{
	char			*name;
	int				(*formula)(t_fractol *fractol);
}					t_formula;


t_image				*init_image(void *mlx);

t_complex			init_complex(double re, double im);

void				set_defaults(t_fractol *fractol);

void				draw_fractal(t_fractol *fractol);

void				draw_help(t_fractol *fractol);

int					iterate_mandelbrot(t_fractol *fractol);

int					iterate_julia(t_fractol *fractol);

int					iterate_burning_ship(t_fractol *fractol);

int					iterate_mandelbar(t_fractol *fractol);

int					iterate_celtic_mandelbrot(t_fractol *fractol);

int					iterate_celtic_mandelbar(t_fractol *fractol);

int					iterate_celtic_perpendicular(t_fractol *fractol);

int					iterate_perpendicular_mandelbrot(t_fractol *fractol);

int					iterate_perpendicular_burning_ship(t_fractol *fractol);

int					iterate_perpendicular_buffalo(t_fractol *fractol);

t_color				get_color(int iteration, t_fractol *fractol);

int					close(void *param);

int					key_press(int key, t_fractol *fractol);

int					zoom(int button, int x, int y, t_fractol *fractol);

int					julia_motion(int x, int y, t_fractol *fractol);

void				print_help(void);

void				terminate(char *s);

#endif
