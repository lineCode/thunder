#ifndef DESKTOPAADAPTOR_H
#define DESKTOPAADAPTOR_H

#include "iplatformadaptor.h"

class Log;

class MobileAdaptor : public IPlatformAdaptor {
public:
    virtual ~MobileAdaptor      () {}

    bool                        init                        (Engine *engine);

    void                        update                      ();

    bool                        start                       ();

    void                        stop                        ();

    void                        destroy                     ();

    bool                        isValid                     ();

    bool                        key                         (Input::KeyCode code);

    Vector3                     mousePosition               ();

    Vector3                     mouseDelta                  ();

    uint8_t                     mouseButtons                ();

    uint32_t                    screenWidth                 ();

    uint32_t                    screenHeight                ();

    void                        setMousePosition            (const Vector3 &position);

    uint16_t                    joystickCount               ();

    uint16_t                    joystickButtons             (uint8_t index);

    Vector4                     joystickThumbs              (uint8_t index);

    Vector2                     joystickTriggers            (uint8_t index);

    void                       *pluginLoad                  (const char *name);

    bool                        pluginUnload                (void *plugin);

    void                       *pluginAddress               (void *plugin, const string &name);

protected:


protected:
    uint8_t                     m_MouseButtons;

    static Vector3              m_MouseDelta;

    static Vector3              m_MousePosition;

};

#endif // DESKTOPAADAPTOR_H