/* -*- mode: c++ -*-
 * Kaleidoscope-Emoji -- Emoji Keys.
 *
 * Copyright (c) 2018 Jochen Pfeiffer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
.* in the Software without restriction, including without limitation the rights
.* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
.* copies of the Software, and to permit persons to whom the Software is
.* furnished to do so, subject to the following conditions:
.*
.* The above copyright notice and this permission notice shall be included in all
.* copies or substantial portions of the Software.
.*
.* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
.* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
.* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
.* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
.* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
.* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
.* SOFTWARE.
 */

#include <Kaleidoscope-Emoji.h>
#include <Kaleidoscope-Unicode.h>

namespace kaleidoscope {
namespace {

static void typeEmojiUnicodeForKey(Key key);
static void typeEmojiUnicodeCharacter(uint32_t character);
static void typeEmojiUnicodeSequence(uint32_t sequence[], size_t size);

} // namespace
} // namespace kaleidoscope


namespace kaleidoscope {

EventHandlerResult Emoji::onKeyswitchEvent(Key &mapped_key, byte row, byte col, uint8_t keyState) {
  if (mapped_key.raw < EMOJI_FIRST || mapped_key.raw > EMOJI_LAST) {
    return EventHandlerResult::OK;
  }

  if (!keyToggledOn(keyState)) {
    return EventHandlerResult::EVENT_CONSUMED;
  }

  typeEmojiUnicodeForKey(mapped_key);

  return EventHandlerResult::EVENT_CONSUMED;
}


namespace {

void typeEmojiUnicodeForKey(Key key) {
  switch (key.raw) {    
  case EMOJI_JOYFUL:
    typeEmojiUnicodeCharacter(0x1F602);    
    break;
  case EMOJI_SMILE:
    typeEmojiUnicodeCharacter(0x1F603);    
    break;
  case EMOJI_WINK:
    typeEmojiUnicodeCharacter(0x1F609);    
    break;
  case EMOJI_BLUSH:
    typeEmojiUnicodeCharacter(0x1F60A);    
    break;
  case EMOJI_CONFIDENT:
    typeEmojiUnicodeCharacter(0x1F60E);    
    break;
  case EMOJI_FLIRTY:
    typeEmojiUnicodeCharacter(0x1F618);    
    break;
  case EMOJI_THINKING:
    typeEmojiUnicodeCharacter(0x1F914);    
    break;
  case EMOJI_DISBELIEF:
    typeEmojiUnicodeCharacter(0x1F644);    
    break;
  case EMOJI_MISCHIEVOUS:
    typeEmojiUnicodeCharacter(0x1F61C);    
    break;
  case EMOJI_UPSIDE_DOWN:
    typeEmojiUnicodeCharacter(0x1F643);    
    break;
  case EMOJI_ANNOYED:
    typeEmojiUnicodeCharacter(0x1F624);    
    break;
  case EMOJI_EXPLODING_HEAD:
    typeEmojiUnicodeCharacter(0x1F92F);    
    break;
  case EMOJI_GRIMACED:
    typeEmojiUnicodeCharacter(0x1F62C);    
    break;
  case EMOJI_FLUSHED:
    typeEmojiUnicodeCharacter(0x1F633);    
    break;
  case EMOJI_CRAZY:
    typeEmojiUnicodeCharacter(0x1F92A);    
    break;
  case EMOJI_ILL:
    typeEmojiUnicodeCharacter(0x1F637);    
    break;
  case EMOJI_VOMITING:
    typeEmojiUnicodeCharacter(0x1F92E);    
    break;
  case EMOJI_NERD:
    typeEmojiUnicodeCharacter(0x1F913);    
    break;
  case EMOJI_CROSSBONES:
    typeEmojiUnicodeCharacter(0x2620);    
    break;
  case EMOJI_MAN_DANCING:
    typeEmojiUnicodeCharacter(0x1F57A);    
    break;
  case EMOJI_VULCAN:
    typeEmojiUnicodeCharacter(0x1F596);    
    break;
  case EMOJI_METAL:
    typeEmojiUnicodeCharacter(0x1F918);    
    break;
  case EMOJI_THUMBSUP:
    typeEmojiUnicodeCharacter(0x1F44D);    
    break;
  case EMOJI_THUMBSDOWN:
    typeEmojiUnicodeCharacter(0x1F44E);    
    break;
  case EMOJI_WAVE:
    typeEmojiUnicodeCharacter(0x1F44B);    
    break;
  case EMOJI_EYES:
    typeEmojiUnicodeCharacter(0x1F440);    
    break;
  case EMOJI_HEART:
    typeEmojiUnicodeCharacter(0x2764);    
    break;
  case EMOJI_BOOM:
    typeEmojiUnicodeCharacter(0x1F4A5);    
    break;
  case EMOJI_HOLE:
    typeEmojiUnicodeCharacter(0x1F573);    
    break;
  case EMOJI_UNICORN_FACE:
    typeEmojiUnicodeCharacter(0x1F984);    
    break;
  case EMOJI_SNAIL:
    typeEmojiUnicodeCharacter(0x1F40C);    
    break;
  case EMOJI_CRICKET:
    typeEmojiUnicodeCharacter(0x1F997);    
    break;
  case EMOJI_SUNFLOWER:
    typeEmojiUnicodeCharacter(0x1F33B);    
    break;
  case EMOJI_PEACH:
    typeEmojiUnicodeCharacter(0x1F351);    
    break;
  case EMOJI_CONSTRUCTION:
    typeEmojiUnicodeCharacter(0x1F6A7);    
    break;
  case EMOJI_ROCKET:
    typeEmojiUnicodeCharacter(0x1F680);    
    break;
  case EMOJI_HOURGLASS_FLOWING:
    typeEmojiUnicodeCharacter(0x23F3);    
    break;
  case EMOJI_SPARKLES:
    typeEmojiUnicodeCharacter(0x2728);    
    break;
  case EMOJI_BALLOON:
    typeEmojiUnicodeCharacter(0x1F388);    
    break;
  case EMOJI_PARTY:
    typeEmojiUnicodeCharacter(0x1F389);    
    break;
  case EMOJI_GIFT:
    typeEmojiUnicodeCharacter(0x1F381);    
    break;
  case EMOJI_MOBILE:
    typeEmojiUnicodeCharacter(0x1F4F1);    
    break;
  case EMOJI_KEYBOARD:
    typeEmojiUnicodeCharacter(0x2328);    
    break;
  case EMOJI_ENVELOPE:
    typeEmojiUnicodeCharacter(0x2709);    
    break;
  case EMOJI_SHOPPING_CART:
    typeEmojiUnicodeCharacter(0x1F6D2);    
    break;
  case EMOJI_WARNING:
    typeEmojiUnicodeCharacter(0x26A0);    
    break;
  case EMOJI_WHITE_CHECK_MARK:
    typeEmojiUnicodeCharacter(0x2705);    
    break;
  case EMOJI_CROSS_MARK:
    typeEmojiUnicodeCharacter(0x274C);    
    break;
  }
}

void typeEmojiUnicodeCharacter(uint32_t character) {
  uint32_t sequence[1] = {character};
  typeEmojiUnicodeSequence(sequence, 1);
}

void typeEmojiUnicodeSequence(uint32_t sequence[], size_t size) {
  emojiTypingWillStart();
  Unicode::start();

  for (uint8_t i = 0; i < size; i++) {
    Unicode::typeCode(sequence[i]);
  }

  Unicode::end();
  emojiTypingDidFinish();
}

} // namespace
} // namespace kaleidoscope

__attribute__((weak)) void emojiTypingWillStart() {
}
__attribute__((weak)) void emojiTypingDidFinish() {
}

kaleidoscope::Emoji Emoji;
