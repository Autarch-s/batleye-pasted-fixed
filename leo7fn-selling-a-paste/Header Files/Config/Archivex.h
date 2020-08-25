/*
leo7fn is selling a pasted cheat (batleye) here is proof kek
leo7fn saying its not even pasted retard here is his src
cracked

Visual#9999
*/
#pragma once

template <typename Stream>
class ArchiveX final {
public:
	constexpr explicit ArchiveX(Stream& stream) noexcept : stream{ stream } { }

	template <typename T>
	constexpr const auto& operator<<(const T& item) const noexcept
	{
		stream.write(reinterpret_cast<const char*>(&item), sizeof(item));
		return *this;
	}

	template <typename T>
	constexpr const auto& operator>>(T& item) const noexcept
	{
		stream.read(reinterpret_cast<char*>(&item), sizeof(item));
		return *this;
	}

private:
	Stream& stream;
};
