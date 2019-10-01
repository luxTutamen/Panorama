#version 450

layout (location = 0) in vec3 vertexPosition_modelspace;
layout (location = 1) in vec2 vertexUV;

out vec2 UV;

uniform mat4 MVP;


void main(){
	gl_Position =  MVP * vec4(vertexPosition_modelspace, 1.0);
    UV = vertexUV;
}