# 2užduotis
# Naudojimo instrukcija (tinka visoms versijoms)
1. Pasirinkite ar nuskaitysite jau turimą failą, ar norite generuoti naują.
2. Atitinkamai įveskite failo pavadinimą arba studentų kiekį, kiek jų norite sugeneruoti.
3. Programa nuskaito failą, apskaičiuoja galutinį balą pagal vidurkį ir medianą, suskirsto studentus į dvi grupes pagal balą (>5 ir <5) ir išveda rezultatą į du failus.
# V2.0
Sukurtas CMakeLists.txt, pridėta dokumentacija panaudojant Doxygen.
# V1.5
Klasei "Studentas" sukurta bazinė klasė "Žmogus".
# V1.2
Realizuota "Rule of three"
# V1.1
Šioje versijoje sukuriama "Studentas" klasė.
Atlikta spartos analizė lyginant struct ir class veikimą.
|           |nuskaitymas       |                 |rušiavimas       |                |išvedimas       |               |
|-----------|------------------|-----------------|-----------------|----------------|----------------|---------------|
|           |struct            |class            |struct           |class           |struct          |class          |
|1 000 000  | 41.5129s         | 70.5627s        |  10.1148s       |  11.3529s      |   21.8778s     |  27.5018s     |
|10 000 000 | 447.245s         | 682.942s        |  180.172s       |  237.483s      |   220.618s     |  260.772s     |

Spartos analizė priklausomai nuo kompiliatoriaus optimizavimo lygio:

|           | 1 000 000 |          |         |
|-----------|-----------|----------|---------|
|flag'as    |nuskaitymas|rušiavimas|išvedimas|
|O1         |73.0281s   |14.9365s  |26.4519s |
|O2         |73.7592s   |14.151s   |26.6388s |
|O3         |73.4099s   |14.0969s  |27.2403s |
