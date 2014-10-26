#include "Enemy.h"


CEnemy::CEnemy()
{
	movepoint0 = 0;
	movepoint1 = 0;
	//x = 0.0;
	y = 0.0;
	width = 25.0;
	height = 25.0;
	t = 0;
	time = 200;
	time1 = 0.0;
	arraycount = 0;
	enemy1 = 6;

	

	mp_x[0] = 0;
	mp_x[1] = ( -400) /2;
	mp_x[2] = ( -400) /2;
	mp_x[3] = (WIDTH / 2 - 200) /2 -100;

	mp_y[0] = 200;
	mp_y[1] =  (400) /2 + 200;
	mp_y[2] =  (-200) /2 + 200;
	mp_y[3] = 0;//-HEIGHT + 200;

	mp_x[4] = (WIDTH / 2 - 200) / 2 -100;
	mp_x[5] = (WIDTH / 2 - 200) / 2 -100;
	mp_x[6] = -300;
	mp_x[7] = -400;

	mp_y[4] = 0;
	mp_y[5] = -HEIGHT / 2 -100;
	mp_y[6] = -HEIGHT / 2 - 200;
	mp_y[7] = -HEIGHT / 2 +400;
	
	//mp_x[7] = 0.0;
	mp_x[8] = -400;
	mp_x[9] = -200;
	mp_x[10] = -300;

	//mp_y[7] = HEIGHT/2;
	mp_y[8] = -HEIGHT / 2 + 600;
	mp_y[9] = 400;
	mp_y[10] = 400;


	ep_x[0] = -WIDTH/2;
	ep_x[1] = 200;//WIDTH/2;
	ep_x[2] = 0.0;
	ep_x[3] = -200.0;
	ep_x[4] = 0.0;
	ep_x[5] = WIDTH / 2;

	ep_y[0] = -HEIGHT/2;
	ep_y[1] = 0.0;//HEIGHT/2;
	ep_y[2] = 200;
	ep_y[3] = 0.0;
	ep_y[4] = -200;
	ep_y[5] = HEIGHT / 2;;

	

	//mp_x[10] = -300;
	mp_x[11] = -200;
	mp_x[12] = 400;
	mp_x[13] = 0;
	mp_x[14] = -200;
	//mp_y[10] = 400;
	mp_y[11] = 400;
	mp_y[12] = -200;
	mp_y[13] = -400;
	mp_y[14] = 100;

	i = 7;

}

void CEnemy::Move()
{
	time1++;

	t = time1 / time ;

	switch (enemy1)
	{
	case 0:
	{
			  //enemy11ÇÃçUåÇ
			  p_x = (1 - t)*(1 - t)*(1 - t)*mp_x[0] + 3 * (1 - t)*(1 - t)*t*mp_x[1] + 3 * (1 - t)*t*t*mp_x[2] + t*t*t*mp_x[3];
			  p_y = (1 - t)*(1 - t)*(1 - t)*mp_y[0] + 3 * (1 - t)*(1 - t)*t*mp_y[1] + 3 * (1 - t)*t*t*mp_y[2] + t*t*t*mp_y[3];
			  //if (time1 == 80)
			  //{
				 // time1 += 30;
				 // time = 400;
			  //}

			  if (p_x == mp_x[3] && p_y == mp_y[3])
			  {
				  enemy1 = 1;
				  time1 = 0.0;
				  time = 400;
				  //return;
			  }
			  
	}
		break;
	case 1:
	{
			  p_x = (1 - t)*(1 - t)*(1 - t)*mp_x[4] + 3 * (1 - t)*(1 - t)*t*mp_x[5] + 3 * (1 - t)*t*t*mp_x[6] + t*t*t*mp_x[7];
			  p_y = (1 - t)*(1 - t)*(1 - t)*mp_y[4] + 3 * (1 - t)*(1 - t)*t*mp_y[5] + 3 * (1 - t)*t*t*mp_y[6] + t*t*t*mp_y[7];
			  if (p_x == mp_x[7] && p_y == mp_y[7])
			  {
				  enemy1 = 2;
				  time1 = 0;
				  time = 200;
			  }

	}
		break;
	case 2:
	{
			  p_x = (1 - t)*(1 - t)*(1 - t)*mp_x[7] + 3 * (1 - t)*(1 - t)*t*mp_x[8] + 3 * (1 - t)*t*t*mp_x[9] + t*t*t*mp_x[10];
			  p_y = (1 - t)*(1 - t)*(1 - t)*mp_y[7] + 3 * (1 - t)*(1 - t)*t*mp_y[8] + 3 * (1 - t)*t*t*mp_y[9] + t*t*t*mp_y[10];
			  if (p_x == mp_x[10] && p_y == mp_y[10 ])
			  {
				  enemy1 = 0;
				  time1 = 0;
				  time = 200;
			  }
	}
		break;
	case 3:
	{
			  //enemyâ∫Ç©ÇÁÇÃèoåª
			  time = 150;
			  p_x = (1 - t)*(1 - t)*ep_x[0] + 2 * (1 - t)*t*ep_x[1] + t*t*ep_x[2];
			  p_y = (1 - t)*(1 - t)*ep_y[0] + 2 * (1 - t)*t*ep_y[1] + t*t*ep_y[2];
			  if (p_x == ep_x[2] && p_y == ep_y[2])
			  {
				  time1 = 0.0;
				  enemy1 = 4;
			  }

	}
		break;
	case 4:
	{
			  time = 150;
			  p_x = (1 - t)*(1 - t)*(1 - t)*ep_x[2] + 3 * (1 - t)*(1 - t)*t*ep_x[3] + 3 * (1 - t)*t*t*ep_x[4] + t*t*t*ep_x[5];
			  p_y = (1 - t)*(1 - t)*(1 - t)*ep_y[2] + 3 * (1 - t)*(1 - t)*t*ep_y[3] + 3 * (1 - t)*t*t*ep_y[4] + t*t*t*ep_y[5];

	}
		break;
	case 5:
	{
			  
	}
		break;
	case 6:
	{
			//è„Ç©ÇÁÇÃenemyÇÃèoåª


			  p_x = (1 - t)*(1 - t)*(1 - t)*mp_x[11] + 3 * (1 - t)*(1 - t)*t*mp_x[12] + 3 * (1 - t)*t*t*mp_x[13] + t*t*t*mp_x[14];
			  p_y = (1 - t)*(1 - t)*(1 - t)*mp_y[11] + 3 * (1 - t)*(1 - t)*t*mp_y[12] + 3 * (1 - t)*t*t*mp_y[13] + t*t*t*mp_y[14];
	}
	}

	

}

void CEnemy::Attack()
{

}

void CEnemy::Array()
{
	for (int i = 0; i <= 10; i++)
	{
		enemyarray_x[i] =-100+ i *30;

		enemyarray_y[i] = 0;


	}



	//enemyarray_x[0] = 0;
	//enemyarray_x[1] = 0;
	//enemyarray_x[2] = 0;
	//enemyarray_x[3] = 0;
	//enemyarray_x[4] = 0;
	//enemyarray_x[5] = 0;
	//enemyarray_x[6] = 0;
	//enemyarray_x[7] = 0;
	//enemyarray_x[8] = 0;
	//enemyarray_x[9] = 0;

	//enemyarray_y[0] = 0;
	//enemyarray_y[1] = 0;
	//enemyarray_y[2] = 0;
	//enemyarray_y[3] = 0;
	//enemyarray_y[4] = 0;
	//enemyarray_y[5] = 0;
	//enemyarray_y[6] = 0;
	//enemyarray_y[7] = 0;
	//enemyarray_y[8] = 0;
	//enemyarray_y[9] = 0;


}

void CEnemy::Update()
{
	Array();
		Move();
	
}

void CEnemy::Draw()
{
	for (int i = 0; i <= 10; i++)
	{
		drawFillBox(enemyarray_x[i], enemyarray_y[i], 25, 25, Color(0.5, 0, 1));
	}



	drawFillBox(p_x, p_y, width, height, Color(0.5, 0.5, 1));
	for (int e = 0; e>= 15; e++)
	{
		drawPoint(mp_x[e], mp_y[e], 5, Color(0.4, 0.6, 1.0));
		drawPoint((mp_x[e] + mp_x[e]) / 2, (mp_y[e] + mp_y[e]) / 2, 5, Color(1, 0, 0));
		drawLine(mp_x[e], mp_y[e], mp_x[e+1], mp_y[e+1], 1, Color(0, 1, 1));


	}
	//drawPoint(p0_x, p0_y, 5, Color(0.4, 0.6, 1.0));
	//drawPoint(p1_x, p1_y, 5, Color(1.0, 0.6, 1.0));
	//drawPoint(p2_x, p2_y, 5, Color(0.0, 1.0, 1.0));
	//drawPoint(p3_x, p3_y, 5, Color(1.0, 0.6, 0.5));
	//drawPoint(p4_x, p4_y, 5, Color(0.5, 0.5, 0.5));
	//drawPoint(p5_x, p5_y, 5, Color(0.5, 0.5, 0.5));
	//drawPoint(p6_x, p6_y, 5, Color(0.5, 0.5, 0.5));
	//drawPoint((p0_x + p1_x) / 2, (p0_y + p1_y) / 2, 5, Color(1, 0, 0));
	//drawPoint((p1_x + p2_x) / 2, (p1_y + p2_y) / 2, 5, Color(1, 0, 0));
	//drawPoint((p2_x + p3_x) / 2, (p2_y + p3_y) / 2, 5, Color(1, 0, 0));
	//drawPoint((p3_x + p4_x) / 2, (p3_y + p4_y) / 2, 5, Color(1, 0, 0));
	//drawPoint((p4_x + p5_x) / 2, (p4_y + p5_y) / 2, 5, Color(1, 0, 0));
	//drawPoint((p5_x + p6_x) / 2, (p5_y + p6_y) / 2, 5, Color(1, 0, 0));
	//drawLine(p0_x, p0_y, p1_x, p1_y, 1, Color(0, 1, 1));
	//drawLine(p1_x, p1_y, p2_x, p2_y, 1, Color(0, 1, 1));
	//drawLine(p2_x, p2_y, p3_x, p3_y,1, Color(0, 1, 1));
	//drawLine(p3_x, p3_y, p4_x, p4_y, 1, Color(0, 1, 1));
	//drawLine(p4_x, p4_y, p5_x, p5_y, 1, Color(0, 1, 1));
	//drawLine(p5_x, p5_y, p6_x, p6_y, 1, Color(0, 1, 1));
	//drawLine((p0_x + p1_x) / 2, (p0_y + p1_y) / 2, (p1_x + p2_x) / 2, (p1_y + p2_y) / 2, 2, Color(0, 1, 0));
	//drawLine((p1_x + p2_x) / 2, (p1_y + p2_y) / 2, (p2_x + p3_x) / 2, (p2_y + p3_y) / 2, 2, Color(0, 1, 0));
	//drawLine((p3_x + p4_x) / 2, (p3_y + p4_y) / 2, (p4_x + p5_x) / 2, (p4_y + p5_y) / 2, 2, Color(0, 1, 0));
	//drawLine((p4_x + p5_x) / 2, (p4_y + p5_y) / 2, (p5_x + p6_x) / 2, (p5_y + p6_y) / 2, 2, Color(0, 1, 0));
	//drawLine(p0_x, p0_y, p_x, p_y, 3, Color(0, 1, 1));
	//drawLine(p0_x, p0_y, p1_x, p1_y, 3, Color(0, 1, 1));
		
			//y = 150;
			//x = -WIDTH / 2 + 75 + i * 55;
			//y = p_y - i * 25;
			//x = p_x + i * 35;
			drawFillBox(x, y, width, height, Color(0.5, 0.5, 1));
		
		//for (int e = 0; e < 10; e++)
		//{
		//	//y = 90;
		//	//x = -WIDTH / 2 + 75 + e * 55;
		//	y = p_y;
		//	x = p_x + e * 25;
		//	drawFillBox(x, y, width, height, Color(1, 0.5, 1));
		//}
	
}