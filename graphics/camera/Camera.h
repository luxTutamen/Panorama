//
// Created by myself on 2/2/20.
//

#ifndef PANORAMA_CAMERA_H
#define PANORAMA_CAMERA_H


#include <GL/gl.h>
#include "../thirdParties/glm/glm/vec3.hpp"
#include "../thirdParties/glm/glm/glm.hpp"

class Camera {
public:
    constexpr static float YAW         = -90.0f;
    constexpr static float PITCH       =  0.0f;
    constexpr static float SPEED       =  2.5f;
    constexpr static float SENSITIVITY =  0.1f;
    constexpr static float ZOOM        =  45.0f;


    // Camera Attributes
    glm::vec3* Position;
    glm::vec3 Front;
    glm::vec3 Up;
    glm::vec3 Right;
    glm::vec3 WorldUp;
    // Euler Angles
    float Yaw;
    float Pitch;
    // Camera options
    float MovementSpeed;
    float MouseSensitivity;
    float Zoom;

    Camera(glm::vec3 position = glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f), float yaw = YAW, float pitch = PITCH);


    Camera(float posX, float posY, float posZ, float upX, float upY, float upZ, float yaw, float pitch);

    glm::mat4 GetViewMatrix();


    //  void ProcessKeyboard(Camera_Movement direction, float deltaTime);

    void ProcessMouseMovement(float xoffset, float yoffset, GLboolean constrainPitch = true);


    void ProcessMouseScroll(float yoffset);

private:
    void updateCameraVectors();

};


#endif //PANORAMA_CAMERA_H