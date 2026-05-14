;SDL
game_entity
	{props "trench"}
	{obstacleid "trench_wall"}
	{collider "construction"}
	{NoCastShadows}
	{lodclass "decor_shellhole"}
	{extender "land_patch"
		{AlignEnabled 1}
		{AlignStacked 0}
		{AlignVolumes 0}
		{TerrainType "ground" "snow"}
	}
	(define "volume"
		{Volume %0 {thickness 1} {tags "body"} {able clear {bullet}{obstacle}}}
	)
	(define "boneLand"
		{bone %0 {parameters "Ground;Land;"}}
	)