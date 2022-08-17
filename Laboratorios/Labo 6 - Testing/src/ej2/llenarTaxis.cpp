int llenarTaxis1(int g1, int g2, int g3) {
	int res = g3 + (g2 + 1) / 2 + (g1 + 3) / 4;
	return res;
}

int llenarTaxis2(int g1, int g2, int g3) {
	int res = g3;

	if (g1 <= g3) {
		g1 = 0;
	} else {
		g1 = g1 - g3;
	}

	return res + (g2 + 1) / 2 + (g1 + 3) / 4;
}

/*
 Observar en los tests que los anteriores 2 no funcionan ya que no considern casos o
 la especificación, la versión 3, funciona en casos, excepto cuando todas las variables
 tienen mismo valor y es impar, Tampoco funciona cuando g2 es impar y la condición 2 se cumple
 es decir g1>0, g3>0 y |g1-g3| != {1 v 2}
 */
int llenarTaxis3(int g1, int g2, int g3) {
	int res = g3;
	if (g1 <= g3) {
		g1 = 0;
	} else {
		g1 = g1 - g3;
	}

	res = res + g2 / 2;
	if (g2 % 2 == 0) {
		if (g1 >= 2) {
			g1 = g1 - 2;
		} else {
			g1 = 0;
		}
	}

	return res + (g1 + 3) / 4;
}
