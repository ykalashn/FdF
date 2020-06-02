#include "fdf.h"

int main()
{
    void    *mlx_ptr;
    void    *win_ptr;
    int     line[4];
    void    **params;
    unsigned c;

    params = (void **)malloc(sizeof(params));
    c = 0xf5c5c3;
    line[0] = 300;
    line[1] = 100;
    line[2] = 200;
    line[3] = 450;
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, "un pain de seigle");
    params[0] = mlx_ptr;
    params[1] = win_ptr;
    ft_draw_line(line, params, c);
    mlx_loop(mlx_ptr);
}

int main(int argc, char **argv)
{
    void    *mlx_ptr;
    void    *win_ptr;


}