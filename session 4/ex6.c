#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDien;
    long tienDien = 0;

    printf("Nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 50)
        tienDien = soDien * 10000;
    else if (soDien < 100)
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
    else if (soDien < 150)
        tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    else if (soDien < 200)
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    else
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;

    printf("So dien tieu thu: %d kWh\n", soDien);
    printf("Tien dien phai tra: %ld VND\n", tienDien);

    return 0;
}

