int baldosasDelPiso(int M, int N, int B) {
    int areaTotal = N*M;
    int areaBaldosa = B*B;
    int cantBaldosas = int(areaTotal/areaBaldosa);
    if(!(N % B == 0 && M % B == 0)){
        cantBaldosas += 2;
    }


	return cantBaldosas;
	// Borrar el return dummy y completar
}
