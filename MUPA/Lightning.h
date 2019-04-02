//
// Created by lucas on 3/31/2019.
//

#ifndef COMPUTER_GRAPHICS_LIGHTNING_H
#define COMPUTER_GRAPHICS_LIGHTNING_H

void lightsSetup()
{
	GLfloat lightSpotCutoff = 100, attenuation = 0.25;
	GLfloat materialAmbientAndDiffuse[] = {1, 1, 1, 1};
	GLfloat materialSpecular[] = {1, 1, 1, 1};
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, materialAmbientAndDiffuse); // Defines objects reflection to ambient and diffuse light
	glMaterialfv(GL_FRONT, GL_SPECULAR, materialSpecular); // Defines objects reflection to specular light
	glMaterialf(GL_FRONT, GL_SHININESS, 80); // Defines objects level of reflection (0 to 128)

	GLfloat lightAmbient[] = {0.2, 0.2, 0.2, 1};
	GLfloat lightDiffuse[] = {1.0, 1.0, 1.0, 1};
	GLfloat lightSpecular[] = {1.0, 1.0, 1.0, 1};
	GLfloat lightDirection[] = {0, -1, 0};

	GLfloat light0Position[] = {3.75, 3.5 + 1.0, 6.75, 1};
	GLfloat light1Position[] = {10, 3.5 + 1.0, 31.25, 1};
	GLfloat light2Position[] = {10, 7.0 + 1.0 + 0.2, 31.25, 1};

	glLightfv(GL_LIGHT0, GL_AMBIENT, lightAmbient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightDiffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, lightSpecular);
	glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, lightSpotCutoff);
	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, attenuation);
	glLightfv(GL_LIGHT0, GL_POSITION, light0Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, lightDirection);

	glLightfv(GL_LIGHT1, GL_AMBIENT, lightAmbient);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightDiffuse);
	glLightfv(GL_LIGHT1, GL_SPECULAR, lightSpecular);
	glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, lightSpotCutoff);
	glLightf(GL_LIGHT1, GL_LINEAR_ATTENUATION, attenuation);
	glLightfv(GL_LIGHT1, GL_POSITION, light1Position);
	glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, lightDirection);

	glLightfv(GL_LIGHT2, GL_AMBIENT, lightAmbient);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, lightDiffuse);
	glLightfv(GL_LIGHT2, GL_SPECULAR, lightSpecular);
	glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, lightSpotCutoff);
	glLightf(GL_LIGHT2, GL_LINEAR_ATTENUATION, attenuation);
	glLightfv(GL_LIGHT2, GL_POSITION, light2Position);
	glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, lightDirection);

	//drawLamp(50, 50, 0.5, light0Position[0], light0Position[1] + 0.5, light0Position[2]);
	//drawLamp(50, 50, 0.5, light1Position[0], light1Position[1] + 0.5, light1Position[2]);
	//drawLamp(50, 50, 0.5, light2Position[0], light2Position[1] + 0.5, light2Position[2]);

}


#endif //COMPUTER_GRAPHICS_LIGHTNING_H