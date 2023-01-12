int frog_jump(int X, int Y, int D) {
	if(X == Y)
        return 0;

    if(Y <= D)
        return 1;

    int res = (Y - X) / D;
    if((Y - X) % D > 0)
        ++res;

    return res;
}