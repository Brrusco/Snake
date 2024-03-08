#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#define tick 100000 //millesimi di secondo
//snake
//il gioco si controlla con WASD
main(){
	srand(time(NULL));
	char c[625],a;
	int p=312,s[624],perso=1,rando,i=625,punto=1,z=1,zi=1,contatore=0;
	
	while(i>0){//rende tutto il campo vuoto
		c[i-1]=' ';
		i--;
	}
	c[625]=' ';
	i=625;
	while(i>0){//parte del sistema per il cacellamento della coda
		s[i-1]=0;
		i--;
	}
	printf("                             premi un tasto per iniziare\n\n\n\n\n");//premi un tasto WASD
	do{
	}while(!kbhit());
	
	if(kbhit()){
		a = getchar;
	}
	
	rando = rand()%625;
	
	while(perso==1){
		
	if(kbhit()){//prende i comandi WASD
		a=getch();
	}
		
	if(((p==0) || (p%25==0)) && (a=='a')){//permette "effetto pac-man"
		p=p+24;
	}else{
		if(a=='a'){
		p=p-1;
	}
	}
	
	if(((p+1)%25==0) && (a=='d')){
		p=p-24;
	}else{
		if(a=='d'){
		p=p+1;
	}
	}
	
	if((p<25) && (a=='w')){
		p=p+600;
	}else{
		if(a=='w'){
		p=p-25;
	}
	}
	
	if((p>599) && (a=='s')){
		p=p-600;
	}else{
		if(a=='s'){
		p=p+25;
	}
	}
	
	
	
    if(c[p]=='#'){//condizione di perdita
		perso--;
	}
	
	c[p]='#';
	c[s[0]]=' ';
	 
    while(punto==0){//genera un nuovo punto una volta preso quelo gia presente
    	rando = rand()%625;
		contatore++;
    	if(c[rando]!=' '){
		}else{
    	punto++;
		}
	}
	c[rando]='o';
	
	zi=0;
	if(punto==1){//cancella la coda in base a quanti punti hai fatto
		s[z]=p;
	while(zi<z){
		s[zi]=s[zi+1];
		s[zi+1]=0;
		zi++;
	}
    }
   
	if(p==rando){//contatori che si modificano se fai punto
		punto--;
		z++;
	}
	system("cls");
	printf("                                                          o---------------------------------------------------o");
	printf("\n   %d                                                     | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",contatore,c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9],c[10],c[11],c[12],c[13],c[14],c[15],c[16],c[17],c[18],c[19],c[20],c[21],c[22],c[23],c[24]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[25],c[26],c[27],c[28],c[29],c[30],c[31],c[32],c[33],c[34],c[35],c[36],c[37],c[38],c[39],c[40],c[41],c[42],c[43],c[44],c[45],c[46],c[47],c[48],c[49]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[50],c[51],c[52],c[53],c[54],c[55],c[56],c[57],c[58],c[59],c[60],c[61],c[62],c[63],c[64],c[65],c[66],c[67],c[68],c[69],c[70],c[71],c[72],c[73],c[74]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[75],c[76],c[77],c[78],c[79],c[80],c[81],c[82],c[83],c[84],c[85],c[86],c[87],c[88],c[89],c[90],c[91],c[92],c[93],c[94],c[95],c[96],c[97],c[98],c[99]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[100],c[101],c[102],c[103],c[104],c[105],c[106],c[107],c[108],c[109],c[110],c[111],c[112],c[113],c[114],c[115],c[116],c[117],c[118],c[119],c[120],c[121],c[122],c[123],c[124]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[125],c[126],c[127],c[128],c[129],c[130],c[131],c[132],c[133],c[134],c[135],c[136],c[137],c[138],c[139],c[140],c[141],c[142],c[143],c[144],c[145],c[146],c[147],c[148],c[149]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[150],c[151],c[152],c[153],c[154],c[155],c[156],c[157],c[158],c[159],c[160],c[161],c[162],c[163],c[164],c[165],c[166],c[167],c[168],c[169],c[170],c[171],c[172],c[173],c[174]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[175],c[176],c[177],c[178],c[179],c[180],c[181],c[182],c[183],c[184],c[185],c[186],c[187],c[188],c[189],c[190],c[191],c[192],c[193],c[194],c[195],c[196],c[197],c[198],c[199]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[200],c[201],c[202],c[203],c[204],c[205],c[206],c[207],c[208],c[209],c[210],c[211],c[212],c[213],c[214],c[215],c[216],c[217],c[218],c[219],c[220],c[221],c[222],c[223],c[224]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[225],c[226],c[227],c[228],c[229],c[230],c[231],c[232],c[233],c[234],c[235],c[236],c[237],c[238],c[239],c[240],c[241],c[242],c[243],c[244],c[245],c[246],c[247],c[248],c[249]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[250],c[251],c[252],c[253],c[254],c[255],c[256],c[257],c[258],c[259],c[260],c[261],c[262],c[263],c[264],c[265],c[266],c[267],c[268],c[269],c[270],c[271],c[272],c[273],c[274]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[275],c[276],c[277],c[278],c[279],c[280],c[281],c[282],c[283],c[284],c[285],c[286],c[287],c[288],c[289],c[290],c[291],c[292],c[293],c[294],c[295],c[296],c[297],c[298],c[299]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[300],c[301],c[302],c[303],c[304],c[305],c[306],c[307],c[308],c[309],c[310],c[311],c[312],c[313],c[314],c[315],c[316],c[317],c[318],c[319],c[320],c[321],c[322],c[323],c[324]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[325],c[326],c[327],c[328],c[329],c[330],c[331],c[332],c[333],c[334],c[335],c[336],c[337],c[338],c[339],c[340],c[341],c[342],c[343],c[344],c[345],c[346],c[347],c[348],c[349]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[350],c[351],c[352],c[253],c[354],c[355],c[356],c[357],c[358],c[359],c[360],c[361],c[362],c[363],c[364],c[365],c[366],c[367],c[368],c[369],c[370],c[371],c[372],c[373],c[374]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[375],c[376],c[377],c[378],c[379],c[380],c[381],c[382],c[383],c[384],c[385],c[386],c[387],c[388],c[389],c[390],c[391],c[392],c[393],c[394],c[395],c[396],c[397],c[398],c[399]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[400],c[401],c[402],c[403],c[404],c[405],c[406],c[407],c[408],c[409],c[410],c[411],c[412],c[413],c[414],c[415],c[416],c[417],c[418],c[419],c[420],c[421],c[422],c[423],c[424]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[425],c[426],c[427],c[428],c[429],c[430],c[431],c[432],c[433],c[434],c[435],c[436],c[437],c[438],c[439],c[440],c[441],c[442],c[443],c[444],c[445],c[446],c[447],c[448],c[449]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[450],c[451],c[452],c[453],c[454],c[455],c[456],c[457],c[458],c[459],c[460],c[461],c[462],c[463],c[464],c[465],c[466],c[467],c[468],c[469],c[470],c[471],c[472],c[473],c[474]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[475],c[476],c[477],c[478],c[479],c[480],c[481],c[482],c[483],c[484],c[485],c[486],c[487],c[488],c[489],c[490],c[491],c[492],c[493],c[494],c[495],c[496],c[497],c[498],c[499]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[500],c[501],c[502],c[503],c[504],c[505],c[506],c[507],c[508],c[509],c[510],c[511],c[512],c[513],c[514],c[515],c[516],c[517],c[518],c[519],c[520],c[521],c[522],c[523],c[524]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[525],c[526],c[527],c[528],c[529],c[530],c[531],c[532],c[533],c[534],c[535],c[536],c[537],c[538],c[539],c[540],c[541],c[542],c[543],c[544],c[545],c[546],c[547],c[548],c[549]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[550],c[551],c[552],c[553],c[554],c[555],c[556],c[557],c[558],c[559],c[560],c[561],c[562],c[563],c[564],c[565],c[566],c[567],c[568],c[569],c[570],c[571],c[572],c[573],c[574]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[575],c[576],c[577],c[578],c[579],c[580],c[581],c[582],c[583],c[584],c[585],c[586],c[587],c[588],c[589],c[590],c[591],c[592],c[593],c[594],c[595],c[596],c[597],c[598],c[599]);
	printf("\n                                                          | %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c |",c[600],c[601],c[602],c[603],c[604],c[605],c[606],c[607],c[608],c[609],c[610],c[611],c[612],c[613],c[614],c[615],c[616],c[617],c[618],c[619],c[620],c[621],c[622],c[623],c[624]);
	printf("\n                                                          o---------------------------------------------------o");
	
	usleep(tick);
}
printf("\n                                              HAI PERSO");
return 0;
}
