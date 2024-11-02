//
// Created by Elias Aggergaard Larsen on 03/11/2024.
//

#include "TextureController.h"

#include "TextureEnum.h"
#include "EngineBase/EngineBase.h"
#include "GraphicsInterface/IGraphicsLibrary.h"

void TextureController::initTextures()
{
    IGraphicsLibrary* graphicsLib = EngineBase::getGraphicsLibrary();
    std::string prePrend = "../../Resources/";
    std::string dotPNG = ".png";

    graphicsLib->loadTexture(prePrend + "Player/PlayerRight" + dotPNG);
}
